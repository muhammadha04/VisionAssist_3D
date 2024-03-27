# VisionAssist

## Empowering Navigation and Object Recognition for Individuals with Low Vision

VisionAssist leverages the power of Augmented Reality (AR) and Azure Object Anchors to provide an innovative solution aimed at enhancing navigational awareness and object recognition for individuals with low vision. Utilizing Microsoft’s HoloLens 2 glasses, VisionAssist offers a real-time AR experience that aids users in identifying and navigating around objects within indoor environments.
![image](https://github.com/muhammadha04/VisionAssist_3D/assets/103769302/a1e222a7-2b30-4c66-b662-f35559ef8d5f)

### Key Features

- **3D Object Detection**: Automatically detects and overlays 3D models on physical objects using Azure Object Anchors, offering a seamless AR experience.
- **Navigational Aids**: Provides dynamic AR overlays to guide users through indoor environments, enhancing spatial awareness.
- **Data-Driven Insights**: Collects data on users' movements and eye gazes to analyze and improve the application's effectiveness.

### Goals

Our project is centered around the exploration of augmented reality's potential in improving life quality for individuals with low vision, focusing on:

- Enhancing spatial awareness and object recognition through AR.
- Evaluating the impact of AR annotations on navigation in various environments.

### Technical Overview

VisionAssist integrates several cutting-edge technologies:

- **Microsoft HoloLens 2**: A leading mixed reality headset providing an immersive AR experience.
- **Azure Object Anchors (AOA)**: Allows for accurate 3D object recognition and tracking without the need for physical markers.
- **Polycam App**: Utilized for capturing images and transforming them into raw 3D models for further refinement and use within the app.
![image](https://github.com/muhammadha04/VisionAssist_3D/assets/103769302/fba135ee-bdf0-41bc-ba72-26defad3105f)

### Getting Started

To set up VisionAssist for development or testing, please follow these steps:

1. **Prerequisites**:
   - Microsoft HoloLens 2
   - Azure Subscription
   - Windows 10 Development Environment

2. **Setup**:
   - Clone the repository: `git clone https://github.com/VisionAssist/VisionAssist.git`
   - Open the project in Unity (version 2020.3 LTS recommended).
   - Configure your Azure Object Anchors account and link it to the project as per the AOA documentation.

3. **Deployment**:
   - Build the project from Unity targeting the HoloLens 2 device.
   - Deploy the application using Visual Studio.

### Contributions

We welcome contributions from the community. Please read our contributing guidelines before submitting pull requests.

### License

VisionAssist is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
