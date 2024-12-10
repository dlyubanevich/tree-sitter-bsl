// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterBsl",
    products: [
        .library(name: "TreeSitterBsl", targets: ["TreeSitterBsl"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterBsl",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterBslTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterBsl",
            ],
            path: "bindings/swift/TreeSitterBslTests"
        )
    ],
    cLanguageStandard: .c11
)
