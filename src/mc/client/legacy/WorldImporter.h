#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/legacy/ImportStatus.h"
#include "mc/client/legacy/RetrieveStatus.h"
#include "mc/client/legacy/conversion/WorldConverter.h"
#include "mc/client/world/LegacyWorldInfo.h"

// auto generated forward declare list
// clang-format off
class CallbackToken;
class TaskGroup;
template<typename T0> class CallbackTokenContext;
struct ImportResult;
namespace Core { class Path; }
namespace Core { class Result; }
namespace Legacy { class WorldConverter; }
namespace Legacy { class WorldProcessRequest; }
namespace Social { class User; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Legacy {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldImporter {
public:
    // WorldImporter inner types define
    using SharedImportContext = std::shared_ptr<
        CallbackTokenContext<std::function<void(Legacy::ImportStatus, float, std::shared_ptr<ImportResult>)>>>;

    using SharedRetrieveContext = std::shared_ptr<CallbackTokenContext<std::function<void(Legacy::RetrieveStatus)>>>;

    using LegacyWorldList = std::vector<LegacyWorldInfo>;

    using RetrieveStatusCallback = std::function<void(Legacy::RetrieveStatus)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                        mImportContext;
    ::ll::UntypedStorage<8, 16>                                        mRetrieveContext;
    ::ll::TypedStorage<8, 24, std::vector<LegacyWorldInfo>>            mWorldList;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                        mFetchInProgress;
    ::ll::TypedStorage<4, 40, std::mutex>                              mWorldListMutex;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>               mTaskGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Legacy::WorldConverter>> mWorldConverter;
    ::ll::UntypedStorage<4, 4>                                         mWorldConverterType;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldImporter();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldImporter() = 0;

    virtual void deleteWorld(std::shared_ptr<Social::User>, std::string const&, std::function<void ()>);

    virtual ::Core::Result _createWorld(::Core::Path const&, ulong const);

    virtual void _setupImport(::Core::Path const&);

    virtual void _doRetrieve(std::shared_ptr<Social::User>, std::shared_ptr<CallbackTokenContext<std::function<void (Legacy::RetrieveStatus)>>>) = 0;

    virtual void _doImport(std::shared_ptr<Social::User>, ::LegacyWorldInfo const&, ::Core::Path const&, std::shared_ptr<CallbackTokenContext<std::function<void (Legacy::ImportStatus, float, std::shared_ptr<ImportResult>)>>>) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldImporter(::Legacy::WorldConverter::Type);

    MCNAPI bool hasWorldsInList() const;

    MCNAPI ::CallbackToken importWorld(std::shared_ptr<Social::User>, std::shared_ptr<Legacy::WorldProcessRequest>);

    MCNAPI void populateWorldList(std::vector<LegacyWorldInfo>&, std::vector<LegacyWorldInfo>&);

    MCNAPI ::CallbackToken
        retrieveWorldList(std::shared_ptr<Social::User>, std::function<void(Legacy::RetrieveStatus)>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<Legacy::WorldImporter> createWorldImporter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Legacy::WorldConverter::Type);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $deleteWorld(std::shared_ptr<Social::User>, std::string const&, std::function<void()>);

    MCNAPI ::Core::Result $_createWorld(::Core::Path const&, ulong const);

    MCNAPI void $_setupImport(::Core::Path const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class WorldImporter {};
#endif // @header-generator platform

} // namespace Legacy
