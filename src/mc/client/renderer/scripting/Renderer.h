#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/scripting/BasePrimitive.h"
#include "mc/client/renderer/scripting/NameTag.h"
#include "mc/client/renderer/scripting/RendererInterface.h"
#include "mc/client/renderer/scripting/Vertex.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/scripting/Plane.h"

// auto generated forward declare list
// clang-format off
class ActorRenderer;
class Font;
class Quaternion;
class Tessellator;
class Vec3;
struct NameTagRenderObject;
namespace Scripting::RenderHelper { struct RenderContext; }
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting::RenderHelper {

#if defined(LL_PLAT_A) // @header-generator platform
class Renderer : public ::Scripting::RenderHelper::RendererInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                           mInsideRenderFrame;
    ::ll::TypedStorage<4, 40, std::mutex>                                    mMutex;
    ::ll::UntypedStorage<8, 24>                                              mBufferedPrimitiveList;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::RenderHelper::Vertex>>  mLineVertices;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::RenderHelper::Vertex>>  mTriangleVertices;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::RenderHelper::NameTag>> mStringsToRender;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Renderer();

    virtual std::vector<NameTagRenderObject> convertStringsToNameTags(::Font&, ::Tessellator&, std::shared_ptr<ActorRenderer>);

    virtual void drawBox(::Vec3 const&, ::mce::Color const&, std::optional<Vec3>);

    virtual void drawText(::Vec3 const&, std::optional<Quaternion>, float, std::string const&, ::mce::Color const&, std::optional<mce::Color> const&, bool, bool, bool);

    virtual void drawLine(::Vec3 const&, ::Vec3 const&, ::mce::Color const&);

    virtual void drawLineList(std::vector<Vec3> const&, ::mce::Color const&);

    virtual void drawDisc(::Vec3 const&, float, ::mce::Color const&, std::optional<Scripting::Plane>, std::optional<int>);

    virtual void drawAxialSphere(::Vec3 const&, float, std::optional<mce::Color>, std::optional<int>);

    virtual void drawPrimitive(::WeakRef<Scripting::RenderHelper::BasePrimitive>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Renderer();

    MCNAPI void onBeginRender(::Scripting::RenderHelper::RenderContext const&);

    MCNAPI void onEndRender(::Scripting::RenderHelper::RenderContext const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<NameTagRenderObject>
           $convertStringsToNameTags(::Font&, ::Tessellator&, std::shared_ptr<ActorRenderer>);

    MCNAPI void $drawBox(::Vec3 const&, ::mce::Color const&, std::optional<Vec3>);

    MCNAPI void $drawText(
        ::Vec3 const&,
        std::optional<Quaternion>,
        float,
        std::string const&,
        ::mce::Color const&,
        std::optional<mce::Color> const&,
        bool,
        bool,
        bool
    );

    MCNAPI void $drawLine(::Vec3 const&, ::Vec3 const&, ::mce::Color const&);

    MCNAPI void $drawLineList(std::vector<Vec3> const&, ::mce::Color const&);

    MCNAPI void
    $drawDisc(::Vec3 const&, float, ::mce::Color const&, std::optional<Scripting::Plane>, std::optional<int>);

    MCNAPI void $drawAxialSphere(::Vec3 const&, float, std::optional<mce::Color>, std::optional<int>);

    MCNAPI void $drawPrimitive(::WeakRef<Scripting::RenderHelper::BasePrimitive>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class Renderer {};
#endif // @header-generator platform

} // namespace Scripting::RenderHelper
