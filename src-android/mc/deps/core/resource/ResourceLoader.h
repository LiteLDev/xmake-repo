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
    using ResourceFileExtensionSetType = ::gsl::span<const std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mGetPath;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ResourceLoader();

    virtual bool load(::ResourceLocationPair const&, std::string&, ::gsl::span<const std::string>) const;

    virtual bool load(::ResourceLocation const&, std::string&, ::gsl::span<const std::string>) const = 0;

    virtual bool load(::ResourceLocation const&, std::string&) const = 0;

    virtual bool loadText(::ResourceLocation const&, std::string&) const;

    virtual std::vector<LoadedResourceData> loadAllVersionsOf(::ResourceLocation const&) const = 0;

    virtual ::mce::Image loadTexture(::ResourceLocation const&) const = 0;

    virtual bool isInStreamableLocation(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    virtual bool isInStreamableLocation(::ResourceLocation const&) const;

    virtual ::Core::PathBuffer<std::string> getPath(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    virtual ::Core::PathBuffer<std::string> getPath(::ResourceLocation const&) const;

    virtual ::Core::PathBuffer<std::string> getPathContainingResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    virtual ::Core::PathBuffer<std::string> getPathContainingResource(::ResourceLocation const&) const;

    virtual std::pair<int, std::string_view> getPackStackIndexOfResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;
    // clang-format on
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

    MCNAPI bool $loadText(::ResourceLocation const&, std::string&) const;

    MCNAPI bool $isInStreamableLocation(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    MCNAPI bool $isInStreamableLocation(::ResourceLocation const&) const;

    MCNAPI ::Core::PathBuffer<std::string> $getPath(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    MCNAPI ::Core::PathBuffer<std::string> $getPath(::ResourceLocation const&) const;

    MCNAPI ::Core::PathBuffer<std::string>
    $getPathContainingResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;

    MCNAPI ::Core::PathBuffer<std::string> $getPathContainingResource(::ResourceLocation const&) const;

    MCNAPI std::pair<int, std::string_view>
           $getPackStackIndexOfResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
