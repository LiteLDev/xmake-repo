#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
// clang-format on

namespace JigsawStructureUtils {

class MetadataCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_21_80::JigsawStructureMetadata const&> mMetadata;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>                              mBlockCache;
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>                              mFinalBlockCache;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>                          mBlockCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::Block const*>>                          mFinalBlockCache;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    MetadataCache& operator=(MetadataCache const&);
    MetadataCache(MetadataCache const&);
    MetadataCache();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MetadataCache(::SharedTypes::v1_21_80::JigsawStructureMetadata const& metadata);

    MCAPI ::Block const* getOrCreateBlockCache(uint64 index);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_80::JigsawStructureMetadata const& metadata);
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace JigsawStructureUtils
