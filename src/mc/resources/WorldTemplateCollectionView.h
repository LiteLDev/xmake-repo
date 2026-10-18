#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/WorldTemplateInfo.h"

#if defined(LL_PLAT_A) // @header-generator platform
class WorldTemplateCollectionView : public ::brstd::move_only_function<std::optional<WorldTemplateInfo>()> {
public:
    // prevent constructor by default
    WorldTemplateCollectionView& operator=(WorldTemplateCollectionView const&);
    WorldTemplateCollectionView(WorldTemplateCollectionView const&);
    WorldTemplateCollectionView();
};
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct WorldTemplateInfo;
// clang-format on

class WorldTemplateCollectionView : public ::brstd::move_only_function<::std::optional<::WorldTemplateInfo>()> {};
#endif // @header-generator platform
