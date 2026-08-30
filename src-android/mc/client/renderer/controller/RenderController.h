#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/controller/RenderControllerArrayType.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
class DataDrivenModel;
class RenderParams;
class Vec4;
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class RenderController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString const>                                 mName;
    ::ll::TypedStorage<8, 120, std::unordered_map<HashedString, ExpressionNode>[3]> mArrays;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                     mGeometry;
    ::ll::TypedStorage<8, 64, ::ExpressionNode[4]>                                  mTintColor;
    ::ll::TypedStorage<8, 64, ::ExpressionNode[4]>                                  mOverlayColor;
    ::ll::TypedStorage<8, 64, ::ExpressionNode[4]>                                  mOnFireColor;
    ::ll::TypedStorage<8, 64, ::ExpressionNode[4]>                                  mIsHurtColor;
    ::ll::TypedStorage<8, 64, ::ExpressionNode[4]>                                  mUVAnim;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, ExpressionNode>>>  mPartVisibility;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, ExpressionNode>>>  mMaterials;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<DataDrivenGeometry>>>     mReferencedGeometries;
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>>                          mTextures;
    ::ll::TypedStorage<1, 1, bool>                                                  mShouldRebuildAnimationMatrices;
    ::ll::TypedStorage<1, 1, bool>                                                  mIgnoreLighting;
    ::ll::TypedStorage<1, 1, bool>                                                  mFilterLighting;
    ::ll::TypedStorage<1, 1, bool>                                                  mMaterialsNeedVertexColor;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                     mLightColorMultiplier;
    ::ll::TypedStorage<8, 8, long const>                                            mResourceLoadTimeStamp;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderController& operator=(RenderController const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderController();

    MCNAPI RenderController(::RenderController const&);

    MCNAPI bool _parseColor(::Json::Value const&, ::ExpressionNode*, ::MolangVersion const, float const);

    MCNAPI std::vector<std::shared_ptr<const DataDrivenGeometry>> getDataDrivenGeometries() const;

    MCNAPI bool getFilterLighting() const;

    MCNAPI std::shared_ptr<DataDrivenGeometry> getGeometry(::RenderParams&) const;

    MCNAPI bool getIgnoreLighting() const;

    MCNAPI float getLightColorMultiplier(::RenderParams&, float const&) const;

    MCNAPI ::mce::Color getOnFireColor(::RenderParams&) const;

    MCNAPI ::mce::Color getOverlayColor(::RenderParams&) const;

    MCNAPI ::mce::Color getTintColor(::RenderParams&) const;

    MCNAPI ::Vec4 getUVAnim(::RenderParams&, ::Vec4 const&) const;

    MCNAPI bool init(::DataDrivenModel&);

    MCNAPI bool parseArray(::Json::Value const&, ::RenderControllerArrayType, ::MolangVersion const);

    MCNAPI void render(::RenderParams&, ::DataDrivenGeometry&);

    MCNAPI bool replaceVariables(::DataDrivenModel&);

    MCNAPI bool updatePartMaterials();

    MCNAPI bool updatePartVisibility();

    MCNAPI ~RenderController();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string nameToRegExStr(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::RenderController const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
