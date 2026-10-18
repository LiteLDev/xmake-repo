#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum STBVorbisError : uint {
    VORBIS__no_error                        = 0,
    VORBIS_need_more_data                   = 1,
    VORBIS_invalid_api_mixing               = 2,
    VORBIS_outofmem                         = 3,
    VORBIS_feature_not_supported            = 4,
    VORBIS_too_many_channels                = 5,
    VORBIS_file_open_failure                = 6,
    VORBIS_seek_without_length              = 7,
    VORBIS_unexpected_eof                   = 10,
    VORBIS_seek_invalid                     = 11,
    VORBIS_invalid_setup                    = 20,
    VORBIS_invalid_stream                   = 21,
    VORBIS_missing_capture_pattern          = 30,
    VORBIS_invalid_stream_structure_version = 31,
    VORBIS_continued_packet_flag_invalid    = 32,
    VORBIS_incorrect_stream_serial_number   = 33,
    VORBIS_invalid_first_page               = 34,
    VORBIS_bad_packet_type                  = 35,
    VORBIS_cant_find_last_page              = 36,
    VORBIS_seek_failed                      = 37,
    VORBIS_ogg_skeleton_not_supported       = 38,
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
