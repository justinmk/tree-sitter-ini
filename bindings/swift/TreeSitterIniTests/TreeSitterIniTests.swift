import XCTest
import SwiftTreeSitter
import TreeSitterIni

final class TreeSitterIniTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_ini())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Ini grammar")
    }
}
