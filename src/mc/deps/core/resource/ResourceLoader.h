#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
class ResourceLocation;
class ResourceLocationPair;
namespace mce { struct Image; }
// clang-format on

class ResourceLoader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ResourceLoader inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ResourceFileExtensionSetType = ::gsl::span<const std::string>;
#else // @header-generator platform
    using ResourceFileExtensionSetType = ::gsl::span<::std::string const>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mGetPath;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::function<::Core::PathBuffer<::std::string>()>> mGetPath;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceLoader();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ResourceLoader();
#else // @header-generator platform
    virtual ~ResourceLoader() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool load(::ResourceLocationPair const&, std::string&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    virtual bool load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool load(::ResourceLocation const&, std::string&, ::gsl::span<const std::string>) const = 0;
#else // @header-generator platform
    virtual bool load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool load(::ResourceLocation const&, std::string&) const = 0;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual bool load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;
#else // LL_PLAT_C
    virtual bool load(
        ::ResourceLocationPair const&    resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool loadText(::ResourceLocation const&, std::string&) const;
#else // @header-generator platform
    virtual bool loadText(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<LoadedResourceData> loadAllVersionsOf(::ResourceLocation const&) const = 0;
#else // @header-generator platform
    virtual ::std::vector<::LoadedResourceData> loadAllVersionsOf(::ResourceLocation const& resourceLocation) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::mce::Image loadTexture(::ResourceLocation const&) const = 0;
#else // @header-generator platform
#ifdef LL_PLAT_C
    virtual ::mce::Image loadTexture(::ResourceLocation const& resourceLocation) const = 0;

#endif
    virtual bool isInStreamableLocation(::ResourceLocation const& resourceLocation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInStreamableLocation(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    virtual bool isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInStreamableLocation(::ResourceLocation const&) const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getPath(::ResourceLocation const& resourceLocation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getPath(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string>
    getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getPath(::ResourceLocation const&) const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string>
    getPathContainingResource(::ResourceLocation const& resourceLocation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getPathContainingResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> getPathContainingResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> getPathContainingResource(::ResourceLocation const&) const;

    virtual std::pair<int, std::string_view> getPackStackIndexOfResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::pair<int, ::std::string_view> getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI explicit ResourceLoader(::std::function<::Core::PathBuffer<::std::string>()> getPath);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::function<::Core::PathBuffer<::std::string>()> getPath);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $load(::ResourceLocationPair const&, std::string&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD bool $load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;
#else // LL_PLAT_C
    MCFOLD bool $load(
        ::ResourceLocationPair const&    resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $loadText(::ResourceLocation const&, std::string&) const;
#else // @header-generator platform
    MCFOLD bool $loadText(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInStreamableLocation(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    MCFOLD bool $isInStreamableLocation(::ResourceLocation const& resourceLocation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInStreamableLocation(::ResourceLocation const&) const;
#else // @header-generator platform
    MCFOLD bool $isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getPath(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    MCAPI ::Core::PathBuffer<::std::string> $getPath(::ResourceLocation const& resourceLocation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getPath(::ResourceLocation const&) const;
#else // @header-generator platform
    MCFOLD ::Core::PathBuffer<::std::string>
    $getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string>
    $getPathContainingResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    MCFOLD ::Core::PathBuffer<::std::string>
    $getPathContainingResource(::ResourceLocation const& resourceLocation) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathBuffer<std::string> $getPathContainingResource(::ResourceLocation const&) const;
#else // @header-generator platform
    MCFOLD ::Core::PathBuffer<::std::string> $getPathContainingResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::pair<int, std::string_view>
           $getPackStackIndexOfResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;
#else // @header-generator platform
    MCAPI ::std::pair<int, ::std::string_view> $getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
