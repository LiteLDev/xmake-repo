#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/actor/v2/GeometryData.h"
#include "mc/client/renderer/actor/v2/ResourceOffset.h"
#include "mc/client/renderer/actor/v2/SimpleTextureData.h"
#include "mc/client/renderer/actor/v2/SkeletonData.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
struct MeshResource;
// clang-format on

struct RenderControllerResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SkeletonData>>                      mSkeletonResources;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<DataDrivenGeometry>>> mAssociatedGeometry;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<MeshResource>>>     mMeshResources;
    ::ll::TypedStorage<8, 24, std::vector<GeometryData>>                      mGeometryData;
    ::ll::TypedStorage<8, 24, std::vector<mce::MaterialPtr>>                  mBakedMaterials;
    ::ll::TypedStorage<8, 24, std::vector<SimpleTextureData>>                 mBakedTextures;
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>>                    mDynamicResourceExpressions;
    ::ll::TypedStorage<8, 24, std::vector<ResourceOffset>>                    mExtendedResources;
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>>                    mPartVisibilityExpressions;
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>>                    mRenderControllerExpressions;
    ::ll::TypedStorage<8, 24, std::vector<float>>                             mRenderControllerConstants;
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>>                    mLightMultiplierExpressions;
    ::ll::TypedStorage<8, 24, std::vector<float>>                             mLightMultiplierConstants;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControllerResources(RenderControllerResources const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RenderControllerResources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
class ExpressionNode;
struct GeometryData;
struct MeshResource;
struct ResourceOffset;
struct SimpleTextureData;
struct SkeletonData;
namespace mce { class MaterialPtr; }
// clang-format on

struct RenderControllerResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SkeletonData>>                        mSkeletonResources;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::DataDrivenGeometry>>> mAssociatedGeometry;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::MeshResource>>>     mMeshResources;
    ::ll::TypedStorage<8, 24, ::std::vector<::GeometryData>>                        mGeometryData;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::MaterialPtr>>                    mBakedMaterials;
    ::ll::TypedStorage<8, 24, ::std::vector<::SimpleTextureData>>                   mBakedTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                      mDynamicResourceExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceOffset>>                      mExtendedResources;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                      mPartVisibilityExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                      mRenderControllerExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>                                 mRenderControllerConstants;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                      mLightMultiplierExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>                                 mLightMultiplierConstants;
    // NOLINTEND
};
#else // @header-generator platform
struct RenderControllerResources {};
#endif // @header-generator platform
#endif // @header-generator platform
