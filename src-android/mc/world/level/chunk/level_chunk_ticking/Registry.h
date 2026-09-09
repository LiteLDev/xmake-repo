#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/level_chunk_ticking/Entity.h"

namespace LevelChunkTicking {

struct Registry : public ::entt::basic_registry<LevelChunkTicking::Entity, std::allocator<LevelChunkTicking::Entity>> {
public:
    // prevent constructor by default
    Registry& operator=(Registry const&);
    Registry(Registry const&);
};

} // namespace LevelChunkTicking
