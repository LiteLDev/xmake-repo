#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/controller/RenderControllerArrayType.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
class DataDrivenModel;
class ExpressionNode;
class RenderParams;
class Vec4;
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class RenderController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk972647;
    ::ll::UntypedStorage<8, 192> mUnkbd217d;
    ::ll::UntypedStorage<8, 16>  mUnk82218a;
    ::ll::UntypedStorage<8, 64>  mUnkd6f969;
    ::ll::UntypedStorage<8, 64>  mUnkd9ddbc;
    ::ll::UntypedStorage<8, 64>  mUnk117366;
    ::ll::UntypedStorage<8, 64>  mUnk6e4053;
    ::ll::UntypedStorage<8, 64>  mUnk44f009;
    ::ll::UntypedStorage<8, 24>  mUnk43d5b6;
    ::ll::UntypedStorage<8, 24>  mUnk8437ab;
    ::ll::UntypedStorage<8, 24>  mUnkf0a6dd;
    ::ll::UntypedStorage<8, 24>  mUnk85c383;
    ::ll::UntypedStorage<1, 1>   mUnkfa4011;
    ::ll::UntypedStorage<1, 1>   mUnkad774d;
    ::ll::UntypedStorage<1, 1>   mUnk7aa91c;
    ::ll::UntypedStorage<1, 1>   mUnk15c5da;
    ::ll::UntypedStorage<8, 16>  mUnk39f6f1;
    ::ll::UntypedStorage<8, 8>   mUnk861111;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderController& operator=(RenderController const&);
    RenderController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderController(::RenderController const&);

    MCNAPI ::std::vector<::std::shared_ptr<::DataDrivenGeometry const>> getDataDrivenGeometries() const;

    MCNAPI ::std::shared_ptr<::DataDrivenGeometry> getGeometry(::RenderParams& renderParams) const;

    MCNAPI ::mce::Color getOnFireColor(::RenderParams& renderParams) const;

    MCNAPI ::mce::Color getOverlayColor(::RenderParams& renderParams) const;

    MCNAPI ::mce::Color getTintColor(::RenderParams& renderParams) const;

    MCNAPI ::Vec4 getUVAnim(::RenderParams& renderParams, ::Vec4 const& defaultUVAnim) const;

    MCNAPI bool init(::DataDrivenModel& model);

    MCNAPI bool parse(::Json::Value const& root, ::MolangVersion molangVersion);

    MCNAPI bool
    parseArray(::Json::Value const& root, ::RenderControllerArrayType arrayType, ::MolangVersion const molangVersion);

    MCNAPI void render(::RenderParams& renderParams, ::DataDrivenGeometry& geo);

    MCNAPI bool replaceVariables(::DataDrivenModel& model);

    MCNAPI bool updatePartMaterials();

    MCNAPI bool updatePartVisibility();

    MCNAPI ~RenderController();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _parseColor(
        ::Json::Value const&  root,
        ::ExpressionNode*     colorNode,
        ::MolangVersion const molangVersion,
        float const           defaultAlpha
    );

    MCNAPI static ::std::string nameToRegExStr(::std::string const& sourceName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RenderController const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class RenderController {};
#endif // @header-generator platform
#endif // @header-generator platform
