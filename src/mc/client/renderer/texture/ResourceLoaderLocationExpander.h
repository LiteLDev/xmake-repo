#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/texture/IResourceLocationExpander.h"

// auto generated forward declare list
// clang-format off
class ResourceLoader;
class ResourceLocation;
// clang-format on

class ResourceLoaderLocationExpander : public ::IResourceLocationExpander {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourceLoader const&> mResourceLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceLoaderLocationExpander& operator=(ResourceLoaderLocationExpander const&);
    ResourceLoaderLocationExpander(ResourceLoaderLocationExpander const&);
    ResourceLoaderLocationExpander();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourceLoaderLocationExpander();

    virtual ::ResourceLocation getFullPath(::ResourceLocation const&, ::gsl::span<const std::string>) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ResourceLoaderLocationExpander(::ResourceLoader const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourceLoader const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ResourceLocation $getFullPath(::ResourceLocation const&, ::gsl::span<const std::string>) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ResourceLoaderLocationExpander {};
#endif // @header-generator platform
