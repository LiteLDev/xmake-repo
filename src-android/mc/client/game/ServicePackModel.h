#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/IServicePackModel.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ContentAcquisition;
class IMinecraftEventing;
class IResourcePackRepository;
class ResourcePackManager;
struct PackIdVersion;
struct ServicePack;
// clang-format on

class ServicePackModel : public ::IServicePackModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContentAcquisition&>      mDownloadMonitor;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&> mPackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>     mPackManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>      mEventing;
    ::ll::TypedStorage<1, 1, bool>                       mReloadOnCompletion;
    // NOLINTEND

public:
    // prevent constructor by default
    ServicePackModel& operator=(ServicePackModel const&);
    ServicePackModel(ServicePackModel const&);
    ServicePackModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void start();

    virtual float update();

    virtual void cancel(std::string const&);

    virtual bool matchingPackExists(::PackIdVersion const&) const;

    virtual bool setPacks(std::vector<PackIdVersion>, bool, std::function<void()>, std::function<void()>);

    virtual void downloadPack(::PackIdVersion const&, ::Core::PathBuffer<std::string> const&);

    virtual bool isComplete() const;

    virtual void onPacksReloaded(std::vector<ServicePack> const&);

    virtual std::optional<float> getDownloadTimeout();

    virtual std::optional<float> getMaxWaitTime();

    virtual ::IMinecraftEventing& getEventing();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $start();

    MCNAPI float $update();

    MCNAPI bool $matchingPackExists(::PackIdVersion const&) const;

    MCNAPI bool $setPacks(std::vector<PackIdVersion>, bool, std::function<void()>, std::function<void()>);

    MCNAPI void $downloadPack(::PackIdVersion const&, ::Core::PathBuffer<std::string> const&);

    MCNAPI bool $isComplete() const;

    MCNAPI void $onPacksReloaded(std::vector<ServicePack> const&);

    MCNAPI std::optional<float> $getDownloadTimeout();

    MCNAPI std::optional<float> $getMaxWaitTime();

    MCNAPI ::IMinecraftEventing& $getEventing();
    // NOLINTEND
};
