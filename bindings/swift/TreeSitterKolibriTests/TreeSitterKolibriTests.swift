import XCTest
import SwiftTreeSitter
import TreeSitterKolibri

final class TreeSitterKolibriTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_kolibri())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Kolibri grammar")
    }
}
