// app/components/FindMe.js
"use client"; // This line allows the component to use client-side features

import { useState } from 'react';

interface Location {
    latitude: number;
    longitude: number;
}

const FindMe = () => {
    const [location, setLocation] = useState<Location | null>(null);
    const [error, setError] = useState<string | null>(null);

    const findLocation = () => {
        if (navigator.geolocation) {
            navigator.geolocation.getCurrentPosition(
                (position) => {
                    const { latitude, longitude } = position.coords;
                    setLocation({ latitude, longitude });
                    sendLocationToServer(latitude, longitude);
                },
                (err) => {
                    setError(err.message);
                }
            );
        } else {
            setError("Geolocation is not supported by this browser.");
        }
    };

    const sendLocationToServer = async (latitude: number, longitude: number) => {
        try {
            const response = await fetch('/api/location', {
                method: 'POST',
                headers: {
                    'Content-Type': 'application/json',
                },
                body: JSON.stringify({ latitude, longitude }),
            });
            const data = await response.json();
            console.log('Location sent successfully:', data);
        } catch (error) {
            console.error('Error sending location:', error);
        }
    };

    return (
        <div className="bg-white p-6 rounded-lg shadow-lg text-center">
            <h1 className="text-2xl font-bold mb-4">Find My Device</h1>
            <button 
                onClick={findLocation} 
                className="bg-blue-500 text-white py-2 px-4 rounded hover:bg-blue-600 transition duration-200"
            >
                Locate Me
            </button>
            {location && (
                <div className="mt-4">
                    <h2 className="text-lg font-semibold">Your Location:</h2>
                    <p>Latitude: {location.latitude}</p>
                    <p>Longitude: {location.longitude}</p>
                </div>
            )}
            {error && <p className="text-red-500 mt-2">{error}</p>}
        </div>
    );
};

export default FindMe;