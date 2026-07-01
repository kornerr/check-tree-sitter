#include <cstdio>
#include <cstdlib>
#include <tree_sitter/api.h>

extern "C" TSLanguage *tree_sitter_kotlin();

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        return 1;
    }

    const char *filename = argv[1];

    FILE *f = fopen(filename, "rb");
    if (!f) {
        fprintf(stderr, "Error: cannot open file '%s'\n", filename);
        return 1;
    }
    fseek(f, 0, SEEK_END);
    long len = ftell(f);
    fseek(f, 0, SEEK_SET);
    char *source = (char *)malloc(len + 1);
    fread(source, 1, len, f);
    source[len] = '\0';
    fclose(f);

    TSParser *parser = ts_parser_new();
    ts_parser_set_language(parser, tree_sitter_kotlin());

    TSTree *tree = ts_parser_parse_string(parser, NULL, source, len);
    TSNode root = ts_tree_root_node(tree);

    char *s_exp = ts_node_string(root);
    printf("%s\n", s_exp);
    free(s_exp);

    ts_tree_delete(tree);
    ts_parser_delete(parser);
    free(source);

    return 0;
}
