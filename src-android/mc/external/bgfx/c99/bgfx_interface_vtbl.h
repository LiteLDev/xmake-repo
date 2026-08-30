#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "cstdarg"
#include "mc/external/bgfx/c99/bgfx_access.h"
#include "mc/external/bgfx/c99/bgfx_attrib.h"
#include "mc/external/bgfx/c99/bgfx_attrib_type.h"
#include "mc/external/bgfx/c99/bgfx_backbuffer_ratio.h"
#include "mc/external/bgfx/c99/bgfx_occlusion_query_result.h"
#include "mc/external/bgfx/c99/bgfx_render_frame.h"
#include "mc/external/bgfx/c99/bgfx_renderer_type.h"
#include "mc/external/bgfx/c99/bgfx_texture_format.h"
#include "mc/external/bgfx/c99/bgfx_topology_convert.h"
#include "mc/external/bgfx/c99/bgfx_topology_sort.h"
#include "mc/external/bgfx/c99/bgfx_uniform_type.h"
#include "mc/external/bgfx/c99/bgfx_view_mode.h"

// auto generated forward declare list
// clang-format off
struct bgfx_attachment_s;
struct bgfx_caps_s;
struct bgfx_dynamic_index_buffer_handle_s;
struct bgfx_dynamic_vertex_buffer_handle_s;
struct bgfx_encoder_s;
struct bgfx_encoder_stats_s;
struct bgfx_frame_buffer_handle_s;
struct bgfx_index_buffer_handle_s;
struct bgfx_indirect_buffer_handle_s;
struct bgfx_init_s;
struct bgfx_instance_data_buffer_s;
struct bgfx_internal_datauint8_t;
struct bgfx_memory_s;
struct bgfx_occlusion_query_handle_s;
struct bgfx_platform_data;
struct bgfx_program_handle_s;
struct bgfx_shader_handle_s;
struct bgfx_stats_s;
struct bgfx_texture_handle_s;
struct bgfx_texture_info_s;
struct bgfx_transform_s;
struct bgfx_transient_index_buffer_s;
struct bgfx_transient_vertex_buffer_s;
struct bgfx_uniform_handle_s;
struct bgfx_uniform_info_s;
struct bgfx_vertex_buffer_handle_s;
struct bgfx_vertex_decl_s;
struct bgfx_view_stats_s;
// clang-format on

struct bgfx_interface_vtbl {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::bgfx_render_frame(*)(int)> render_frame;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_platform_data const*)> set_platform_data;
    ::ll::UntypedStorage<8, 8> get_internal_data;
    ::ll::TypedStorage<8, 8, ulong(*)(::bgfx_texture_handle_s, ulong, uint)> override_internal_texture_ptr;
    ::ll::TypedStorage<8, 8, ulong(*)(::bgfx_texture_handle_s, ushort, ushort, uchar, ::bgfx_texture_format, uint)> override_internal_texture;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_vertex_decl_s*, ::bgfx_renderer_type)> vertex_decl_begin;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_vertex_decl_s*, ::bgfx_attrib, uchar, ::bgfx_attrib_type, bool, bool)> vertex_decl_add;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_vertex_decl_s const*, ::bgfx_attrib, uchar*, ::bgfx_attrib_type*, bool*, bool*)> vertex_decl_decode;
    ::ll::TypedStorage<8, 8, bool(*)(::bgfx_vertex_decl_s const*, ::bgfx_attrib)> vertex_decl_has;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_vertex_decl_s*, uchar)> vertex_decl_skip;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_vertex_decl_s*)> vertex_decl_end;
    ::ll::TypedStorage<8, 8, void(*)(float const*, bool, ::bgfx_attrib, ::bgfx_vertex_decl_s const*, void*, uint)> vertex_pack;
    ::ll::TypedStorage<8, 8, void(*)(float*, ::bgfx_attrib, ::bgfx_vertex_decl_s const*, void const*, uint)> vertex_unpack;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_vertex_decl_s const*, void*, ::bgfx_vertex_decl_s const*, void const*, uint)> vertex_convert;
    ::ll::TypedStorage<8, 8, ushort(*)(ushort*, ::bgfx_vertex_decl_s const*, void const*, ushort, float)> weld_vertices;
    ::ll::TypedStorage<8, 8, uint(*)(::bgfx_topology_convert, void*, uint, void const*, uint, bool)> topology_convert;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_topology_sort, void*, uint, float const*, float const*, void const*, uint, void const*, uint, bool)> topology_sort_tri_list;
    ::ll::TypedStorage<8, 8, uchar(*)(uchar, ::bgfx_renderer_type*)> get_supported_renderers;
    ::ll::TypedStorage<8, 8, char const*(*)(::bgfx_renderer_type)> get_renderer_name;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_init_s*)> init_ctor;
    ::ll::TypedStorage<8, 8, bool(*)(::bgfx_init_s const*)> init;
    ::ll::TypedStorage<8, 8, void(*)()> shutdown;
    ::ll::TypedStorage<8, 8, void(*)(uint, uint, uint)> reset;
    ::ll::TypedStorage<8, 8, uint(*)(bool)> frame;
    ::ll::TypedStorage<8, 8, ::bgfx_renderer_type(*)()> get_renderer_type;
    ::ll::TypedStorage<8, 8, ::bgfx_caps_s const*(*)()> get_caps;
    ::ll::TypedStorage<8, 8, ::bgfx_stats_s const(*)()> get_stats;
    ::ll::TypedStorage<8, 8, ::bgfx_stats_s const(*)()> get_lastframe_stats;
    ::ll::TypedStorage<8, 8, ushort(*)(ushort, ::bgfx_view_stats_s*)> get_view_stats;
    ::ll::TypedStorage<8, 8, ushort(*)(ushort, ::bgfx_encoder_stats_s*)> get_encoder_stats;
    ::ll::TypedStorage<8, 8, ::bgfx_memory_s const*(*)(uint)> alloc;
    ::ll::TypedStorage<8, 8, ::bgfx_memory_s const*(*)(void const*, uint)> copy;
    ::ll::TypedStorage<8, 8, ::bgfx_memory_s const*(*)(void const*, uint)> make_ref;
    ::ll::TypedStorage<8, 8, ::bgfx_memory_s const*(*)(void const*, uint, void(*)(void*, void*), void*)> make_ref_release;
    ::ll::TypedStorage<8, 8, void(*)(uint)> set_debug;
    ::ll::TypedStorage<8, 8, void(*)(uchar, bool)> dbg_text_clear;
    ::ll::TypedStorage<8, 8, void(*)(ushort, ushort, uchar, char const*)> dbg_text_printf;
    ::ll::TypedStorage<8, 8, void(*)(ushort, ushort, uchar, char const*, ::__va_list)> dbg_text_vprintf;
    ::ll::TypedStorage<8, 8, void(*)(ushort, ushort, ushort, ushort, void const*, ushort)> dbg_text_image;
    ::ll::TypedStorage<8, 8, ::bgfx_index_buffer_handle_s(*)(::bgfx_memory_s const*, ushort)> create_index_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_index_buffer_handle_s)> destroy_index_buffer;
    ::ll::TypedStorage<8, 8, ::bgfx_vertex_buffer_handle_s(*)(::bgfx_memory_s const*, ::bgfx_vertex_decl_s const*, ushort)> create_vertex_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_vertex_buffer_handle_s)> destroy_vertex_buffer;
    ::ll::TypedStorage<8, 8, ::bgfx_dynamic_index_buffer_handle_s(*)(uint, ushort)> create_dynamic_index_buffer;
    ::ll::TypedStorage<8, 8, ::bgfx_dynamic_index_buffer_handle_s(*)(::bgfx_memory_s const*, ushort)> create_dynamic_index_buffer_mem;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_dynamic_index_buffer_handle_s, uint, ::bgfx_memory_s const*)> update_dynamic_index_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_dynamic_index_buffer_handle_s)> destroy_dynamic_index_buffer;
    ::ll::TypedStorage<8, 8, ::bgfx_dynamic_vertex_buffer_handle_s(*)(uint, ::bgfx_vertex_decl_s const*, ushort)> create_dynamic_vertex_buffer;
    ::ll::TypedStorage<8, 8, ::bgfx_dynamic_vertex_buffer_handle_s(*)(::bgfx_memory_s const*, ::bgfx_vertex_decl_s const*, ushort)> create_dynamic_vertex_buffer_mem;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_dynamic_vertex_buffer_handle_s, uint, ::bgfx_memory_s const*)> update_dynamic_vertex_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_dynamic_vertex_buffer_handle_s)> destroy_dynamic_vertex_buffer;
    ::ll::TypedStorage<8, 8, uint(*)(uint)> get_avail_transient_index_buffer;
    ::ll::TypedStorage<8, 8, uint(*)(uint, ::bgfx_vertex_decl_s const*)> get_avail_transient_vertex_buffer;
    ::ll::TypedStorage<8, 8, uint(*)(uint, ushort)> get_avail_instance_data_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_transient_index_buffer_s*, uint)> alloc_transient_index_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_transient_vertex_buffer_s*, uint, ::bgfx_vertex_decl_s const*)> alloc_transient_vertex_buffer;
    ::ll::TypedStorage<8, 8, bool(*)(::bgfx_transient_vertex_buffer_s*, ::bgfx_vertex_decl_s const*, uint, ::bgfx_transient_index_buffer_s*, uint)> alloc_transient_buffers;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_instance_data_buffer_s*, uint, ushort)> alloc_instance_data_buffer;
    ::ll::TypedStorage<8, 8, ::bgfx_indirect_buffer_handle_s(*)(uint)> create_indirect_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_indirect_buffer_handle_s)> destroy_indirect_buffer;
    ::ll::TypedStorage<8, 8, ::bgfx_shader_handle_s(*)(::bgfx_memory_s const*)> create_shader;
    ::ll::TypedStorage<8, 8, ushort(*)(::bgfx_shader_handle_s, ::bgfx_uniform_handle_s*, ushort)> get_shader_uniforms;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_shader_handle_s, char const*, int)> set_shader_name;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_shader_handle_s)> destroy_shader;
    ::ll::TypedStorage<8, 8, ::bgfx_program_handle_s(*)(::bgfx_shader_handle_s, ::bgfx_shader_handle_s, bool)> create_program;
    ::ll::TypedStorage<8, 8, ::bgfx_program_handle_s(*)(::bgfx_shader_handle_s, bool)> create_compute_program;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_program_handle_s)> destroy_program;
    ::ll::TypedStorage<8, 8, bool(*)(ushort, bool, ushort, ::bgfx_texture_format, uint)> is_texture_valid;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_texture_info_s*, ushort, ushort, ushort, bool, bool, ushort, ::bgfx_texture_format)> calc_texture_size;
    ::ll::TypedStorage<8, 8, ::bgfx_texture_handle_s(*)(::bgfx_memory_s const*, uint, uchar, ::bgfx_texture_info_s*)> create_texture;
    ::ll::TypedStorage<8, 8, ::bgfx_texture_handle_s(*)(ushort, ushort, bool, ushort, ::bgfx_texture_format, uint, ::bgfx_memory_s const*)> create_texture_2d;
    ::ll::TypedStorage<8, 8, ::bgfx_texture_handle_s(*)(::bgfx_backbuffer_ratio, bool, ushort, ::bgfx_texture_format, uint)> create_texture_2d_scaled;
    ::ll::TypedStorage<8, 8, ::bgfx_texture_handle_s(*)(ushort, ushort, ushort, bool, ::bgfx_texture_format, uint, ::bgfx_memory_s const*)> create_texture_3d;
    ::ll::TypedStorage<8, 8, ::bgfx_texture_handle_s(*)(ushort, bool, ushort, ::bgfx_texture_format, uint, ::bgfx_memory_s const*)> create_texture_cube;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_texture_handle_s, ushort, uchar, ushort, ushort, ushort, ushort, ::bgfx_memory_s const*, ushort)> update_texture_2d;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_texture_handle_s, uchar, ushort, ushort, ushort, ushort, ushort, ushort, ::bgfx_memory_s const*)> update_texture_3d;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_texture_handle_s, ushort, uchar, uchar, ushort, ushort, ushort, ushort, ::bgfx_memory_s const*, ushort)> update_texture_cube;
    ::ll::TypedStorage<8, 8, uint(*)(::bgfx_texture_handle_s, void*, uchar)> read_texture;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_texture_handle_s, char const*, int)> set_texture_name;
    ::ll::TypedStorage<8, 8, void*(*)(::bgfx_texture_handle_s)> get_direct_access_ptr;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_texture_handle_s)> destroy_texture;
    ::ll::TypedStorage<8, 8, ::bgfx_frame_buffer_handle_s(*)(ushort, ushort, ::bgfx_texture_format, uint)> create_frame_buffer;
    ::ll::TypedStorage<8, 8, ::bgfx_frame_buffer_handle_s(*)(::bgfx_backbuffer_ratio, ::bgfx_texture_format, uint)> create_frame_buffer_scaled;
    ::ll::TypedStorage<8, 8, ::bgfx_frame_buffer_handle_s(*)(uchar, ::bgfx_attachment_s const*, bool)> create_frame_buffer_from_attachment;
    ::ll::TypedStorage<8, 8, ::bgfx_frame_buffer_handle_s(*)(void*, ushort, ushort, ::bgfx_texture_format)> create_frame_buffer_from_nwh;
    ::ll::TypedStorage<8, 8, ::bgfx_texture_handle_s(*)(::bgfx_frame_buffer_handle_s, uchar)> get_texture;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_frame_buffer_handle_s)> destroy_frame_buffer;
    ::ll::TypedStorage<8, 8, ::bgfx_uniform_handle_s(*)(char const*, ::bgfx_uniform_type, ushort)> create_uniform;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_uniform_handle_s, ::bgfx_uniform_info_s*)> get_uniform_info;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_uniform_handle_s)> destroy_uniform;
    ::ll::TypedStorage<8, 8, ::bgfx_occlusion_query_handle_s(*)()> create_occlusion_query;
    ::ll::TypedStorage<8, 8, ::bgfx_occlusion_query_result(*)(::bgfx_occlusion_query_handle_s, int*)> get_result;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_occlusion_query_handle_s)> destroy_occlusion_query;
    ::ll::TypedStorage<8, 8, void(*)(uchar, float const*)> set_palette_color;
    ::ll::TypedStorage<8, 8, void(*)(ushort, char const*)> set_view_name;
    ::ll::TypedStorage<8, 8, void(*)(ushort, ushort, ushort, ushort, ushort)> set_view_rect;
    ::ll::TypedStorage<8, 8, void(*)(ushort, ushort, ushort, ushort, ushort)> set_view_scissor;
    ::ll::TypedStorage<8, 8, void(*)(ushort, ushort, uint, float, uchar)> set_view_clear;
    ::ll::TypedStorage<8, 8, void(*)(ushort, ushort, float, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar)> set_view_clear_mrt;
    ::ll::TypedStorage<8, 8, void(*)(ushort, ::bgfx_view_mode)> set_view_mode;
    ::ll::TypedStorage<8, 8, void(*)(ushort, ::bgfx_frame_buffer_handle_s)> set_view_frame_buffer;
    ::ll::TypedStorage<8, 8, void(*)(ushort, void const*, void const*)> set_view_transform;
    ::ll::TypedStorage<8, 8, void(*)(ushort, void const*, void const*, uchar, void const*)> set_view_transform_stereo;
    ::ll::TypedStorage<8, 8, void(*)(ushort, ushort, ushort const*)> set_view_order;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, char const*)> encoder_set_marker;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ulong, uint)> encoder_set_state;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ::bgfx_occlusion_query_handle_s, bool)> encoder_set_condition;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uint, uint)> encoder_set_stencil;
    ::ll::TypedStorage<8, 8, ushort(*)(::bgfx_encoder_s*, ushort, ushort, ushort, ushort)> encoder_set_scissor;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ushort)> encoder_set_scissor_cached;
    ::ll::TypedStorage<8, 8, uint(*)(::bgfx_encoder_s*, void const*, ushort)> encoder_set_transform;
    ::ll::TypedStorage<8, 8, uint(*)(::bgfx_encoder_s*, ::bgfx_transform_s*, ushort)> encoder_alloc_transform;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uint, ushort)> encoder_set_transform_cached;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ::bgfx_uniform_handle_s, void const*, ushort)> encoder_set_uniform;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ::bgfx_index_buffer_handle_s, uint, uint, uint)> encoder_set_index_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ::bgfx_dynamic_index_buffer_handle_s, uint, uint, uint)> encoder_set_dynamic_index_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ::bgfx_transient_index_buffer_s const*, uint, uint, uint)> encoder_set_transient_index_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uchar, ::bgfx_vertex_buffer_handle_s, uint, uint)> encoder_set_vertex_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uchar, ::bgfx_dynamic_vertex_buffer_handle_s, uint, uint)> encoder_set_dynamic_vertex_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uchar, ::bgfx_transient_vertex_buffer_s const*, uint, uint)> encoder_set_transient_vertex_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uint)> encoder_set_vertex_count;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ::bgfx_instance_data_buffer_s const*, uint, uint)> encoder_set_instance_data_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ::bgfx_vertex_buffer_handle_s, uint, uint)> encoder_set_instance_data_from_vertex_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ::bgfx_dynamic_vertex_buffer_handle_s, uint, uint)> encoder_set_instance_data_from_dynamic_vertex_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uint)> encoder_set_instance_count;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uchar, ::bgfx_uniform_handle_s, ::bgfx_texture_handle_s, uint)> encoder_set_texture;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ushort)> encoder_touch;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ushort, ::bgfx_program_handle_s, int, bool)> encoder_submit;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ushort, ::bgfx_program_handle_s, ::bgfx_occlusion_query_handle_s, int, bool)> encoder_submit_occlusion_query;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ushort, ::bgfx_program_handle_s, ::bgfx_indirect_buffer_handle_s, ushort, ushort, int, bool)> encoder_submit_indirect;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uchar, ::bgfx_texture_handle_s, uchar, ::bgfx_access, ::bgfx_texture_format)> encoder_set_image;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uchar, ::bgfx_index_buffer_handle_s, ::bgfx_access)> encoder_set_compute_index_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uchar, ::bgfx_vertex_buffer_handle_s, ::bgfx_access)> encoder_set_compute_vertex_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uchar, ::bgfx_dynamic_index_buffer_handle_s, ::bgfx_access)> encoder_set_compute_dynamic_index_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uchar, ::bgfx_dynamic_vertex_buffer_handle_s, ::bgfx_access)> encoder_set_compute_dynamic_vertex_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, uchar, ::bgfx_indirect_buffer_handle_s, ::bgfx_access)> encoder_set_compute_indirect_buffer;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ushort, ::bgfx_program_handle_s, uint, uint, uint, uchar)> encoder_dispatch;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ushort, ::bgfx_program_handle_s, ::bgfx_indirect_buffer_handle_s, ushort, ushort, uchar)> encoder_dispatch_indirect;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*)> encoder_discard;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_encoder_s*, ushort, ::bgfx_texture_handle_s, uchar, ushort, ushort, ushort, ::bgfx_texture_handle_s, uchar, ushort, ushort, ushort, ushort, ushort, ushort)> encoder_blit;
    ::ll::TypedStorage<8, 8, void(*)(::bgfx_frame_buffer_handle_s, char const*)> request_screen_shot;
    // clang-format on
    // NOLINTEND
};
