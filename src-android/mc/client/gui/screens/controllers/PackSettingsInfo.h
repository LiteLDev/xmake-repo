#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/SubpackInfoCollection.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackSettingsFactory;
// clang-format on

struct PackSettingsInfo {
public:
    // PackSettingsInfo inner types define
    using PackSettingsFinishedCallback = std::function<void(const PackSettingsInfo&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackManifest>> mPackManifest;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>   mWorldId;
    ::ll::UntypedStorage<8, 32>                             mWorldPath;
    ::ll::TypedStorage<8, 8, ::PackSettingsFactory*>        mPackSettingFactory;
    ::ll::TypedStorage<8, 24, ::SubpackInfoCollection>      mSubpackInfoCollection;
    ::ll::TypedStorage<4, 4, int>                           mSubpackIndex;
    ::ll::UntypedStorage<8, 48>                             mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettingsInfo& operator=(PackSettingsInfo const&);
    PackSettingsInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackSettingsInfo(
        std::unique_ptr<PackManifest>,
        std::optional<std::string>,
        std::optional<Core::PathBuffer<std::string>>,
        ::PackSettingsFactory*,
        ::SubpackInfoCollection const&,
        int,
        std::function<void(const PackSettingsInfo&)> const&
    );

    MCNAPI ~PackSettingsInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<PackManifest>,
        std::optional<std::string>,
        std::optional<Core::PathBuffer<std::string>>,
        ::PackSettingsFactory*,
        ::SubpackInfoCollection const&,
        int,
        std::function<void(const PackSettingsInfo&)> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
