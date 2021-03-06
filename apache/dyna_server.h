/* Contents autogenerated by dyna_tools.py */
const char *lily_server_dynaload_table[] = {
    "\0\0"
    ,"R\0env\0Hash[String, Tainted[String]]"
    ,"R\0get\0Hash[String, Tainted[String]]"
    ,"R\0httpmethod\0String"
    ,"R\0post\0Hash[String, Tainted[String]]"
    ,"F\0escape\0(String):String"
    ,"F\0write\0(String)"
    ,"F\0write_literal\0(String)"
    ,"F\0write_raw\0(String)"
    ,"Z"
};

void *lily_server_loader(lily_options *o, uint16_t *c, int id)
{
    switch (id) {
        case 1: return load_var_env(o, c);
        case 2: return load_var_get(o, c);
        case 3: return load_var_httpmethod(o, c);
        case 4: return load_var_post(o, c);
        case 5: return lily_server_escape;
        case 6: return lily_server_write;
        case 7: return lily_server_write_literal;
        case 8: return lily_server_write_raw;
        default: return NULL;
    }
}

#define register_server(p) lily_register_package(parser, "server", lily_server_dynaload_table, lily_server_loader);
