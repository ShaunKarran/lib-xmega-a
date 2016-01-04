
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

struct OBJ_t {
    size_t num_vertices;
    float  *vertices;
    size_t num_vertex_indices;
    int    *vertex_indices;
    size_t num_normals;
    float  *normals;
    size_t num_normal_indices;
    int    *normal_indices;
};

void obj_parse(std::ifstream *obj_file, struct OBJ_t *obj);

void obj_write_header(std::ofstream *header_file, struct OBJ_t *obj);
