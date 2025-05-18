
/*#ifndef AST_H
#define AST_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Düğüm tipleri
typedef enum {
    NODE_PROGRAM,
    NODE_BLOCK,
    NODE_STATEMENT,
    NODE_EXPRESSION,
    NODE_LITERAL,
    NODE_IDENTIFIER,
    NODE_BINARY_OP,
    NODE_UNARY_OP,
    NODE_ASSIGNMENT,
    NODE_LOOP,
    NODE_CONDITION,
    NODE_FUNCTION_DEF,
    NODE_FUNCTION_CALL,
    NODE_RETURN,
    NODE_COMMAND
} NodeType;

// AST düğümü
typedef struct ASTNode {
    NodeType type;
    union {
        // Literaller için
        struct {
            enum { INT_VAL, DOUBLE_VAL, STRING_VAL, BOOL_VAL } literal_type;
            union {
                int int_val;
                double double_val;
                char* string_val;
                int bool_val;
            };
        } literal;

        // Tanımlayıcı için
        char* identifier;

        // İkili operatör için
        struct {
            int op;
            struct ASTNode* left;
            struct ASTNode* right;
        } binary_op;

        // Tekli operatör için
        struct {
            int op;
            struct ASTNode* operand;
        } unary_op;

        // Atama için
        struct {
            char* var_name;
            enum { ASSIGN, ADD_ASSIGN, SUB_ASSIGN } assign_type;
            struct ASTNode* value;
        } assignment;

        // Döngü için
        struct {
            struct ASTNode* condition;
            struct ASTNode* body;
        } loop;

        // Koşul için
        struct {
            struct ASTNode* condition;
            struct ASTNode* if_body;
            struct ASTNode* else_body;
        } condition;

        // Fonksiyon tanımı için
        struct {
            char* name;
            char** params;
            int param_count;
            struct ASTNode* body;
        } function_def;

        // Fonksiyon çağrısı için
        struct {
            char* name;
            struct ASTNode** args;
            int arg_count;
        } function_call;

        // Dönüş ifadesi için
        struct ASTNode* return_value;

        // Komut için
        struct {
            enum {
                CMD_PRINT, CMD_DISPLAY, CMD_CLEAR_SCREEN,
                CMD_SET_COLOR, CMD_SET_THICKNESS, CMD_DRAW_RECT,
                CMD_DRAW_CIRCLE, CMD_DRAW_TRIANGLE, CMD_FILL,
                CMD_UPDATE
            } cmd_type;
            struct ASTNode** args;
            int arg_count;
        } command;

        // Alt düğümler için
        struct {
            struct ASTNode** children;
            int child_count;
        } block;
    };
} ASTNode;

// AST düğümü oluşturma fonksiyonları
ASTNode* create_program_node();
ASTNode* create_block_node();
ASTNode* create_int_literal(int value);
ASTNode* create_double_literal(double value);
ASTNode* create_string_literal(const char* value);
ASTNode* create_bool_literal(int value);
ASTNode* create_identifier(const char* name);
ASTNode* create_binary_op(int op, ASTNode* left, ASTNode* right);
ASTNode* create_unary_op(int op, ASTNode* operand);
ASTNode* create_assignment(const char* var_name, int assign_type, ASTNode* value);
ASTNode* create_loop(ASTNode* condition, ASTNode* body);
ASTNode* create_condition(ASTNode* condition, ASTNode* if_body, ASTNode* else_body);
ASTNode* create_function_def(const char* name, char** params, int param_count, ASTNode* body);
ASTNode* create_function_call(const char* name, ASTNode** args, int arg_count);
ASTNode* create_return(ASTNode* value);
ASTNode* create_command(int cmd_type, ASTNode** args, int arg_count);

// AST düğümünü bloka eklemek için
void add_to_block(ASTNode* block, ASTNode* node);

// AST düğümünü serbest bırakmak için
void free_ast(ASTNode* node);

// AST'yi görselleştirmek için
void print_ast(ASTNode* node, int indent);

#endif /* AST_H */