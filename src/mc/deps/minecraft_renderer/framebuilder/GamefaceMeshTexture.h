#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct GamefaceMeshTexture {};
#endif // @header-generator platform

} // namespace mce::framebuilder
