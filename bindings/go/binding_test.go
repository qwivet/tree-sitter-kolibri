package tree_sitter_kolibri_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_kolibri "github.com/qwivet/tree-sitter-kolibri.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_kolibri.Language())
	if language == nil {
		t.Errorf("Error loading Kolibri grammar")
	}
}
