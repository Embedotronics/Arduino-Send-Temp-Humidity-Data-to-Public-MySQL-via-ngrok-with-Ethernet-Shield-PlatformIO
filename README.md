# Send Temp & Humidity Data from Arduino to Public MySQL via ngrok using Ethernet Shield & PlatformIO
This project demonstrates how to send temperature and humidity data from an Arduino equipped with an Ethernet Shield to a MySQL database hosted on a public server. We utilize PlatformIO in VS Code for development and ngrok to make the local server publicly accessible.

**Table of Contents**
Introduction
Hardware Requirements
Software Requirements
Installation and Setup
Usage
Contributing
License
Introduction
In this project, you'll learn how to:

Set up an Arduino with an Ethernet Shield and DHT sensor.
Configure a local MySQL database using XAMPP.
Write and upload code to the Arduino using PlatformIO.
Make your local server publicly accessible using ngrok.
Send and log sensor data to the MySQL database(phpmyadmin).

Hardware Requirements:

Arduino board (e.g., Uno, Nano)
Ethernet Shield
DHT11 or DHT22 sensor
Ethernet cable
USB cable


Software Requirements:

Visual Studio Code
PlatformIO IDE
XAMPP
ngrok
DHT Sensor Library
Installation and Setup
Clone the Repository:

git clone https://https://github.com/Embedotronics/Arduino-Send-Temp-Humidity-Data-to-Public-MySQL-via-ngrok-with-Ethernet-Shield-PlatformIO.git

Set Up XAMPP:

Install XAMPP and start Apache and MySQL.

Create a database and table in phpMyAdmin for storing sensor data.

Connect Hardware:

Connect the DHT sensor to the Arduino.

Attach the Ethernet Shield to the Arduino and connect it to your network.

Configure ngrok:

Install ngrok and set up an account.

Run ngrok to expose your local server.

Upload Code to Arduino:

Open the project in VS Code with PlatformIO.

Write and upload the code to the Arduino.

Usage

Run the Local Server:

Start Apache and MySQL using the XAMPP control panel.

Expose Server with ngrok:

ngrok http 80

Note the public URL provided by ngrok.

Monitor Data:

The Arduino will send sensor data to the public URL, which will be logged in the MySQL database.

Contributing

Contributions are welcome! Please open an issue or submit a pull request for any improvements or bug fixes.

License

This project is licensed under the MIT License. See the LICENSE file for details.
