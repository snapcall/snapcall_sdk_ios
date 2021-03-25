// swift-tools-version:5.3
import PackageDescription
let package = Package(
    name: "Snapcall_Framework",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "Snapcall_Framework",
            targets: ["Snapcall_Framework"]),
    ],
    dependencies: [
 		.package(url:"https://github.com/pnoyelle/WebRTC_IOS", .exact("1.4455.0"))
    ],
    targets: [
      .binaryTarget(
      	    name: "Snapcall_Framework",
            path: "./Snapcall_Framework.xcframework",
            dependencies: ["WebRTC_IOS"]
	  )
    ]
)
