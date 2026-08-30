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
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>                              mBlockCache;
    ::ll::TypedStorage<8, 24, std::vector<const Block*>>                              mFinalBlockCache;
    // NOLINTEND

public:
    // prevent constructor by default
    MetadataCache& operator=(MetadataCache const&);
    MetadataCache(MetadataCache const&);
    MetadataCache();
};

} // namespace JigsawStructureUtils
