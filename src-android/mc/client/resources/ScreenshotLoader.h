#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#include "mc/resources/AppResourceLoader.h"

// auto generated forward declare list
// clang-format off
class IAppResourceLoadImpl;
class ResourceLocation;
namespace Core { class Path; }
namespace mce { struct Image; }
// clang-format on

class ScreenshotLoader : public ::AppResourceLoader {
public:
    // ScreenshotLoader inner types define
    using GetScreenshotsFolder = ::brstd::move_only_function<Core::Path() const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mGetScreenshotsFolder;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenshotLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScreenshotLoader();

    virtual bool load(::ResourceLocation const&, std::string&, ::gsl::span<const std::string>) const;

    virtual bool load(::ResourceLocation const&, std::string&) const;

    virtual ::mce::Image loadTexture(::ResourceLocation const&) const;

    virtual std::pair<int, std::string_view> getPackStackIndexOfResource(::ResourceLocation const&, ::gsl::span<const std::string>) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScreenshotLoader(std::shared_ptr<IAppResourceLoadImpl>, ::brstd::move_only_function<Core::Path() const>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<IAppResourceLoadImpl>, ::brstd::move_only_function<Core::Path() const>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $load(::ResourceLocation const&, std::string&, ::gsl::span<const std::string>) const;

    MCNAPI bool $load(::ResourceLocation const&, std::string&) const;

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
