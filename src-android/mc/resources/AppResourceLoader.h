#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLoader.h"

// auto generated forward declare list
// clang-format off
class IAppResourceLoadImpl;
class LoadedResourceData;
class ResourceLocation;
class ResourceLocationPair;
namespace mce { struct Image; }
// clang-format on

class AppResourceLoader : public ::ResourceLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<IAppResourceLoadImpl>> mImpl;
    // NOLINTEND

public:
    // prevent constructor by default
    AppResourceLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~AppResourceLoader();

    virtual bool load(::ResourceLocationPair const&, std::string&, ::gsl::span<const std::string>) const;

    virtual bool load(::ResourceLocation const&, std::string&, ::gsl::span<const std::string>) const;

    virtual bool load(::ResourceLocation const&, std::string&) const;

    virtual std::vector<LoadedResourceData> loadAllVersionsOf(::ResourceLocation const&) const;

    virtual ::mce::Image loadTexture(::ResourceLocation const&) const;

    virtual std::pair<int, std::string_view> getPackStackIndexOfResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AppResourceLoader(std::shared_ptr<IAppResourceLoadImpl>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<IAppResourceLoadImpl>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $load(::ResourceLocationPair const&, std::string&, ::gsl::span<const std::string>) const;

    MCNAPI bool $load(::ResourceLocation const&, std::string&, ::gsl::span<const std::string>) const;

    MCNAPI bool $load(::ResourceLocation const&, std::string&) const;

    MCNAPI std::vector<LoadedResourceData> $loadAllVersionsOf(::ResourceLocation const&) const;

    MCNAPI ::mce::Image $loadTexture(::ResourceLocation const&) const;

    MCNAPI std::pair<int, std::string_view>
           $getPackStackIndexOfResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
