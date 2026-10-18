#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/frame_object/components/RayTraceMaterialFlags.h"
#include "mc/external/render_dragon/frame_object/components/RayTraceObjectType.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct ResolvedAccelerationStructureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::frameobject::components {

#if defined(LL_PLAT_A) // @header-generator platform
struct RaytraceObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                                 mBLASHandle;
    ::ll::TypedStorage<1, 1, ::dragon::frameobject::components::details::RayTraceObjectType>    mObjectType;
    ::ll::TypedStorage<8, 8, long>                                                              mUniqueId;
    ::ll::TypedStorage<2, 2, ::dragon::frameobject::components::details::RayTraceMaterialFlags> mMaterialFlags;
    ::ll::UntypedStorage<8, 72>                                                                 mTextures;
    ::ll::TypedStorage<4, 8, uint[2]>                                                           mTintColours;
    // NOLINTEND

public:
    // prevent constructor by default
    RaytraceObject& operator=(RaytraceObject const&);
    RaytraceObject(RaytraceObject const&);
    RaytraceObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RaytraceObject(
        ::mce::ServerResourcePointer<dragon::ResolvedAccelerationStructureResource> const&,
        ::dragon::frameobject::components::details::RayTraceObjectType,
        long const,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        ::dragon::frameobject::components::details::RayTraceMaterialFlags const,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        uint,
        uint
    );

    MCNAPI ::dragon::frameobject::components::RaytraceObject&
    operator=(::dragon::frameobject::components::RaytraceObject&&);

    MCNAPI ~RaytraceObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::mce::ServerResourcePointer<dragon::ResolvedAccelerationStructureResource> const&,
        ::dragon::frameobject::components::details::RayTraceObjectType,
        long const,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        ::dragon::frameobject::components::details::RayTraceMaterialFlags const,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        ::mce::ServerResourcePointer<dragon::ResolvedTextureResource> const&,
        uint,
        uint
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct RaytraceObject {};
#endif // @header-generator platform

} // namespace dragon::frameobject::components
