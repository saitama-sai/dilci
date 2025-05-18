
/*#include "ast.h"

// AST düğümü oluşturma fonksiyonları
ASTNode* create_program_node() {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_PROGRAM;
    node->block.children = NULL;
    node->block.child_count = 0;
    return node;
}

ASTNode* create_block_node() {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_BLOCK;
    node->block.children = NULL;
    node->block.child_count = 0;
    return node;
}

ASTNode* create_int_literal(int value) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_LITERAL;
    node->literal.literal_type = INT_VAL;
    node->literal.int_val = value;
    return node;
}

ASTNode* create_double_literal(double value) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_LITERAL;
    node->literal.literal_type = DOUBLE_VAL;
    node->literal.double_val = value;
    return node;
}

ASTNode* create_string_literal(const char* value) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_LITERAL;
    node->literal.literal_type = STRING_VAL;
    node->literal.string_val = strdup(value);
    return node;
}

ASTNode* create_bool_literal(int value) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_LITERAL;
    node->literal.literal_type = BOOL_VAL;
    node->literal.bool_val = value;
    return node;
}

ASTNode* create_identifier(const char* name) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_IDENTIFIER;
    node->identifier = strdup(name);
    return node;
}

ASTNode* create_binary_op(int op, ASTNode* left, ASTNode* right) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_BINARY_OP;
    node->binary_op.op = op;
    node->binary_op.left = left;
    node->binary_op.right = right;
    return node;
}

ASTNode* create_unary_op(int op, ASTNode* operand) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_UNARY_OP;
    node->unary_op.op = op;
    node->unary_op.operand = operand;
    return node;
}

ASTNode* create_assignment(const char* var_name, int assign_type, ASTNode* value) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_ASSIGNMENT;
    node->assignment.var_name = strdup(var_name);
    node->assignment.assign_type = assign_type;
    node->assignment.value = value;
    return node;
}

ASTNode* create_loop(ASTNode* condition, ASTNode* body) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_LOOP;
    node->loop.condition = condition;
    node->loop.body = body;
    return node;
}

ASTNode* create_condition(ASTNode* condition, ASTNode* if_body, ASTNode* else_body) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_CONDITION;
    node->condition.condition = condition;
    node->condition.if_body = if_body;
    node->condition.else_body = else_body;
    return node;
}

ASTNode* create_function_def(const char* name, char** params, int param_count, ASTNode* body) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_FUNCTION_DEF;
    node->function_def.name = strdup(name);
    node->function_def.params = (char**)malloc(sizeof(char*) * param_count);
    for (int i = 0; i < param_count; i++) {
        node->function_def.params[i] = strdup(params[i]);
    }
    node->function_def.param_count = param_count;
    node->function_def.body = body;
    return node;
}

ASTNode* create_function_call(const char* name, ASTNode** args, int arg_count) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_FUNCTION_CALL;
    node->function_call.name = strdup(name);
    node->function_call.args = args;
    node->function_call.arg_count = arg_count;
    return node;
}

ASTNode* create_return(ASTNode* value) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_RETURN;
    node->return_value = value;
    return node;
}

ASTNode* create_command(int cmd_type, ASTNode** args, int arg_count) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = NODE_COMMAND;
    node->command.cmd_type = cmd_type;
    node->command.args = args;
    node->command.arg_count = arg_count;
    return node;
}

void add_to_block(ASTNode* block, ASTNode* node) {
    if (block->type != NODE_BLOCK && block->type != NODE_PROGRAM) {
        fprintf(stderr, "Blok düğümü değil!\n");
        return;
    }
    
    block->block.child_count++;
    block->block.children = (ASTNode**)realloc(block->block.children, 
                                             sizeof(ASTNode*) * block->block.child_count);
    block->block.children[block->block.child_count - 1] = node;
}

void free_ast(ASTNode* node) {
    if (!node) return;
    
    switch (node->type) {
        case NODE_PROGRAM:
        case NODE_BLOCK:
            for (int i = 0; i < node->block.child_count; i++) {
                free_ast(node->block.children[i]);
            }
            free(node->block.children);
            break;
            
        case NODE_LITERAL:
            if (node->literal.literal_type == STRING_VAL) {
                free(node->literal.string_val);
            }
            break;
            
        case NODE_IDENTIFIER:
            free(node->identifier);
            break;
            
        case NODE_BINARY_OP:
            free_ast(node->binary_op.left);
            free_ast(node->binary_op.right);
            break;
            
        case NODE_UNARY_OP:
            free_ast(node->unary_op.operand);
            break;
            
        case NODE_ASSIGNMENT:
            free(node->assignment.var_name);
            free_ast(node->assignment.value);
            break;
            
        case NODE_LOOP:
            free_ast(node->loop.condition);
            free_ast(node->loop.body);
            break;
            
        case NODE_CONDITION:
            free_ast(node->condition.condition);
            free_ast(node->condition.if_body);
            if (node->condition.else_body) {
                free_ast(node->condition.else_body);
            }
            break;
            
        case NODE_FUNCTION_DEF:
            free(node->function_def.name);
            for (int i = 0; i < node->function_def.param_count; i++) {
                free(node->function_def.params[i]);
            }
            free(node->function_def.params);
            free_ast(node->function_def.body);
            break;
            
        case NODE_FUNCTION_CALL:
            free(node->function_call.name);
            for (int i = 0; i < node->function_call.arg_count; i++) {
                free_ast(node->function_call.args[i]);
            }
            free(node->function_call.args);
            break;
            
        case NODE_RETURN:
            free_ast(node->return_value);
            break;
            
        case NODE_COMMAND:
            for (int i = 0; i < node->command.arg_count; i++) {
                free_ast(node->command.args[i]);
            }
            free(node->command.args);
            break;
            
        default:
            break;
    }
    
    free(node);
}

// AST'yi görselleştirmek için
void print_ast(ASTNode* node, int indent) {
    if (!node) return;
    
    // İndent yazdır
    for (int i = 0; i < indent; i++) {
        printf("  ");
    }
    
    // Düğüm tipine göre yazdır
    switch (node->type) {
        case NODE_PROGRAM:
            printf("Program:\n");
            for (int i = 0; i < node->block.child_count; i++) {
                print_ast(node->block.children[i], indent + 1);
            }
            break;
            
        case NODE_BLOCK:
            printf("Block:\n");
            for (int i = 0; i < node->block.child_count; i++) {
                print_ast(node->block.children[i], indent + 1);
            }
            break;
            
        case NODE_LITERAL:
            printf("Literal: ");
            switch (node->literal.literal_type) {
                case INT_VAL:
                    printf("%d (int)\n", node->literal.int_val);
                    break;
                case DOUBLE_VAL:
                    printf("%f (double)\n", node->literal.double_val);
                    break;
                case STRING_VAL:
                    printf("\"%s\" (string)\n", node->literal.string_val);
                    break;
                case BOOL_VAL:
                    printf("%s (bool)\n", node->literal.bool_val ? "dogru" : "yanlis");
                    break;
            }
            break;
            
        case NODE_IDENTIFIER:
            printf("Identifier: %s\n", node->identifier);
            break;
            
        case NODE_BINARY_OP:
            printf("Binary Operation: %c\n", node->binary_op.op);
            print_ast(node->binary_op.left, indent + 1);
            print_ast(node->binary_op.right, indent + 1);
            break;
            
        case NODE_UNARY_OP:
            printf("Unary Operation: %c\n", node->unary_op.op);
            print_ast(node->unary_op.operand, indent + 1);
            break;
            
        case NODE_ASSIGNMENT:
            printf("Assignment: %s ", node->assignment.var_name);
            switch (node->assignment.assign_type) {
                case ASSIGN:
                    printf("<-\n");
                    break;
                case ADD_ASSIGN:
                    printf("+<-\n");
                    break;
                case SUB_ASSIGN:
                    printf("-<-\n");
                    break;
            }
            print_ast(node->assignment.value, indent + 1);
            break;
            
        case NODE_LOOP:
            printf("Loop:\n");
            for (int i = 0; i < indent + 1; i++) printf("  ");
            printf("Condition:\n");
            print_ast(node->loop.condition, indent + 2);
            for (int i = 0; i < indent + 1; i++) printf("  ");
            printf("Body:\n");
            print_ast(node->loop.body, indent + 2);
            break;
            
        case NODE_CONDITION:
            printf("Condition:\n");
            for (int i = 0; i < indent + 1; i++) printf("  ");
            printf("If Condition:\n");
            print_ast(node->condition.condition, indent + 2);
            for (int i = 0; i < indent + 1; i++) printf("  ");
            printf("If Body:\n");
            print_ast(node->condition.if_body, indent + 2);
            if (node->condition.else_body) {
                for (int i = 0; i < indent + 1; i++) printf("  ");
                printf("Else Body:\n");
                print_ast(node->condition.else_body, indent + 2);
            }
            break;
            
        case NODE_FUNCTION_DEF:
            printf("Function Definition: %s\n", node->function_def.name);
            for (int i = 0; i < indent + 1; i++) printf("  ");
            printf("Parameters: ");
            for (int i = 0; i < node->function_def.param_count; i++) {
                printf("%s ", node->function_def.params[i]);
            }
            printf("\n");
            for (int i = 0; i < indent + 1; i++) printf("  ");
            printf("Body:\n");
            print_ast(node->function_def.body, indent + 2);
            break;
            
        case NODE_FUNCTION_CALL:
            printf("Function Call: %s\n", node->function_call.name);
            for (int i = 0; i < indent + 1; i++) printf("  ");
            printf("Arguments:\n");
            for (int i = 0; i < node->function_call.arg_count; i++) {
                print_ast(node->function_call.args[i], indent + 2);
            }
            break;
            
        case NODE_RETURN:
            printf("Return:\n");
            print_ast(node->return_value, indent + 1);
            break;
            
        case NODE_COMMAND:
            printf("Command: ");
            switch (node->command.cmd_type) {
                case CMD_PRINT:
                    printf("ekrana_yaz\n");
                    break;
                case CMD_DISPLAY:
                    printf("deger_goster\n");
                    break;
                case CMD_CLEAR_SCREEN:
                    printf("ekrani_temizle\n");
                    break;
                case CMD_SET_COLOR:
                    printf("renk_ayarla\n");
                    break;
                case CMD_SET_THICKNESS:
                    printf("kalinlik_ayarla\n");
                    break;
                case CMD_DRAW_RECT:
                    printf("dikdortgen_ciz\n");
                    break;
                case CMD_DRAW_CIRCLE:
                    printf("daire_ciz\n");
                    break;
                case CMD_DRAW_TRIANGLE:
                    printf("ucgen_ciz\n");
                    break;
                case CMD_FILL:
                    printf("doldur\n");
                    break;
                case CMD_UPDATE:
                    printf("guncelle\n");
                    break;
            }
            for (int i = 0; i < node->command.arg_count; i++) {
                print_ast(node->command.args[i], indent + 1);
            }
            break;
            
        default:
            printf("Unknown node type: %d\n", node->type);
            break;
    }
}