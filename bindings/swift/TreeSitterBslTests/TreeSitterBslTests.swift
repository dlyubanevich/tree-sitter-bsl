import XCTest
import SwiftTreeSitter
import TreeSitterBsl

final class TreeSitterBslTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_bsl())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Bsl grammar")
    }
}
