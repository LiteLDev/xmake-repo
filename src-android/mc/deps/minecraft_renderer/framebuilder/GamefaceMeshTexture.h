#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"

namespace mce::framebuilder {

struct GamefaceMeshTexture : public ::std::variant<
                                 std::monostate,
                                 mce::ClientResourcePointer<dragon::ResolvedTextureResource>,
                                 mce::ClientTexture,
                                 dragon::atlas::AtlasTileHandle> {
public:
    // prevent constructor by default
    GamefaceMeshTexture& operator=(GamefaceMeshTexture const&);
    GamefaceMeshTexture();
};

} // namespace mce::framebuilder
