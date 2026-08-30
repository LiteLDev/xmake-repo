#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/file_watcher/WatchStatus.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct ImageResourceManager;
namespace mce { class FileWatcherHandle; }
namespace mce { class FileWatcherNull; }
namespace mce { struct Image; }
// clang-format on

namespace mce {

class ImageWatcher : public ::mce::IImageWatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::FileWatcherNull&> mFileWatcher;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageWatcher& operator=(ImageWatcher const&);
    ImageWatcher(ImageWatcher const&);
    ImageWatcher();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ImageWatcher();

    virtual ::mce::FileWatcherHandle load(::ResourceLocation const&, ::ImageResourceManager&, std::shared_ptr<mce::Image>&, ::mce::WatchStatus const);

    virtual ::mce::FileWatcherHandle loadAndRegister(::ResourceLocation const&, ::ImageResourceManager&, std::shared_ptr<mce::Image>&, ::mce::WatchStatus const, std::function<void (ResourceLocation, const std::shared_ptr<mce::Image>&)>);

    virtual ::mce::FileWatcherHandle registerLoader(::ResourceLocation const&, ::ImageResourceManager&, std::shared_ptr<mce::Image>&, ::mce::WatchStatus const, std::function<void (ResourceLocation, const std::shared_ptr<mce::Image>&)>);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ImageWatcher(::mce::FileWatcherNull&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::FileWatcherNull&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::FileWatcherHandle
    $load(::ResourceLocation const&, ::ImageResourceManager&, std::shared_ptr<mce::Image>&, ::mce::WatchStatus const);

    MCNAPI ::mce::FileWatcherHandle $loadAndRegister(
        ::ResourceLocation const&,
        ::ImageResourceManager&,
        std::shared_ptr<mce::Image>&,
        ::mce::WatchStatus const,
        std::function<void(ResourceLocation, const std::shared_ptr<mce::Image>&)>
    );

    MCNAPI ::mce::FileWatcherHandle $registerLoader(
        ::ResourceLocation const&,
        ::ImageResourceManager&,
        std::shared_ptr<mce::Image>&,
        ::mce::WatchStatus const,
        std::function<void(ResourceLocation, const std::shared_ptr<mce::Image>&)>
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
