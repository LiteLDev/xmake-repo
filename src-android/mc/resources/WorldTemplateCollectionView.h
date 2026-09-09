#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/WorldTemplateInfo.h"

class WorldTemplateCollectionView : public ::brstd::move_only_function<std::optional<WorldTemplateInfo>()> {
public:
    // prevent constructor by default
    WorldTemplateCollectionView& operator=(WorldTemplateCollectionView const&);
    WorldTemplateCollectionView(WorldTemplateCollectionView const&);
    WorldTemplateCollectionView();
};
