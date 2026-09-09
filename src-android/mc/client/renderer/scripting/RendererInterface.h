#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
namespace Scripting::RenderHelper { class BasePrimitive; }
namespace mce { class Color; }
// clang-format on

namespace Scripting::RenderHelper {

class RendererInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RendererInterface() = default;

    virtual std::vector<NameTagRenderObject> convertStringsToNameTags(::Font&, ::Tessellator&, std::shared_ptr<ActorRenderer>) = 0;

    virtual void drawBox(::Vec3 const&, ::mce::Color const&, std::optional<Vec3>) = 0;

    virtual void drawText(::Vec3 const&, std::optional<Quaternion>, float, std::string const&, ::mce::Color const&, std::optional<mce::Color> const&, bool, bool, bool) = 0;

    virtual void drawLine(::Vec3 const&, ::Vec3 const&, ::mce::Color const&) = 0;

    virtual void drawLineList(std::vector<Vec3> const&, ::mce::Color const&) = 0;

    virtual void drawDisc(::Vec3 const&, float, ::mce::Color const&, std::optional<Scripting::Plane>, std::optional<int>) = 0;

    virtual void drawAxialSphere(::Vec3 const&, float, std::optional<mce::Color>, std::optional<int>) = 0;

    virtual void drawPrimitive(::WeakRef<Scripting::RenderHelper::BasePrimitive>) = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Scripting::RenderHelper
