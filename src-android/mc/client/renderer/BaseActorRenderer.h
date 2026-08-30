#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/ActorShaderManager.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Quaternion;
class Tessellator;
class Vec3;
struct NameTagRenderObject;
namespace mce { class Color; }
namespace mce { class Mesh; }
// clang-format on

class BaseActorRenderer : public ::ActorShaderManager {
public:
    // BaseActorRenderer inner types define
    using NameplateBackgroundInfo = std::variant<std::shared_ptr<mce::Mesh>, int>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mNameTagBackgroundMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mNameTagBackgroundWithBackfaceMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mNameTagTextMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mNameTagTextWithBackfaceMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDepthTestedNameTagMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDepthTestedNameTagWithBackfaceMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDepthTestedNameTextMat;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDepthTestedNameTextWithBackfaceMat;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseActorRenderer();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseActorRenderer();

    MCNAPI std::vector<NameTagRenderObject> extractRenderTextObjects(
        ::Tessellator&,
        std::string const&,
        std::vector<int> const&,
        ::Vec3 const&,
        ::mce::Color const&,
        float,
        std::optional<Quaternion> const&,
        std::optional<mce::Color> const&,
        bool,
        bool,
        bool
    ) const;

    MCNAPI ::mce::MaterialPtr& getDepthTestedNameTagMat();

    MCNAPI ::mce::MaterialPtr& getDepthTestedNameTextMat();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NameTagRenderObject _extractRenderTextObject(
        ::Tessellator&,
        std::string const&,
        std::vector<int> const&,
        ::Vec3 const&,
        ::mce::Color const&,
        ::mce::MaterialPtr const*,
        ::mce::MaterialPtr const*,
        ::mce::Color const&,
        float,
        std::optional<Quaternion> const&
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::Color const& NAME_TAG_BACKGROUND_COLOR();

    MCNAPI static ::mce::Color const& NAME_TAG_BACKGROUND_COLOR_EDU();
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
