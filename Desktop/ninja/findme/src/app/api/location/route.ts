
// app/api/location/route.js
export async function POST(request: Request) {
    // Parse the incoming request body
    const { latitude, longitude } = await request.json();

    // Here, you can add logic to save the location
    console.log(`Received location: ${latitude}, ${longitude}`);

    return new Response(JSON.stringify({ message: 'Location received', latitude, longitude }), {
        status: 200,
        headers: {
            'Content-Type': 'application/json',
        },
    });
}