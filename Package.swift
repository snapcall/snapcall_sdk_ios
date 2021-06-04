// swift-tools-version:5.3
import PackageDescription
let package = Package(
    name: "Snapcall_Framework",
    platforms: [
        .iOS(.v10)
    ],
    products: [
        .library(
            name: "Snapcall_Framework",
            targets: ["Snapcall_Framework"]),
    ],
    dependencies: [
 		.package(name: "WebRTC_IOS", url:"https://github.com/pnoyelle/WebRTC_IOS", .exact("1.6.0-bitcode"))
    ],
    targets: [
      .binaryTarget(
      	    name: "Snapcall_Framework",
            path: "./Snapcall_Framework.xcframework"
	  )
    ]
)
