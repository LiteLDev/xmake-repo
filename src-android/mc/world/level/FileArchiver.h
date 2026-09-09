#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/ZipProgress.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/world/level/FileArchiverOutcome.h"

// auto generated forward declare list
// clang-format off
class FilePickerSettings;
class IContentKeyProvider;
class ILevelListCache;
class IResourcePackRepository;
class Level;
class LevelData;
class LevelDbEnv;
class LevelStorage;
class LevelStorageSource;
class PackInstance;
class Scheduler;
class TaskGroup;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class FilePathManager; }
namespace Core { class Path; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace Core::ZipUtils { class ZipSettings; }
// clang-format on

class FileArchiver : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FileArchiver inner types declare
    // clang-format off
    class ProgressReporter;
    class IWorldConverter;
    struct EduCloudImportInfo;
    struct Result;
    struct InterventionPublishers;
    struct CopyWorldResult;
    struct ImportWorldsResult;
    struct ExportData;
    struct WorldConverterExportSettings;
    // clang-format on

    // FileArchiver inner types define
    enum class State : int {
        Idle      = 0,
        Importing = 1,
        Exporting = 2,
    };

    enum class ExportType : int {
        Level               = 0,
        Template            = 1,
        Project             = 2,
        PlayableEditorLevel = 3,
        PackagedLevel       = 4,
        PackagedLevelOnly   = 5,
    };

    enum class ShowToast : int {
        Enabled  = 0,
        Disabled = 1,
    };

    class ProgressReporter : public ::Core::ZipUtils::ZipProgress, public ::Bedrock::EnableNonOwnerReferences {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 40, std::mutex>  mProgressLock;
        ::ll::TypedStorage<8, 24, std::string> mProgressTitle;
        ::ll::TypedStorage<8, 24, std::string> mProgressMessage;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ProgressReporter();

        virtual void clear();
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI std::string getProgressMessage();

        MCNAPI float getProgressPercentage() const;

        MCNAPI std::string getProgressTitle();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $clear();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class IWorldConverter {};

    struct EduCloudImportInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>         isCloudImport;
        ::ll::TypedStorage<1, 1, bool>         allowMultiplayer;
        ::ll::TypedStorage<8, 24, std::string> educationOid;
        ::ll::TypedStorage<8, 24, std::string> cTag;
        ::ll::TypedStorage<8, 24, std::string> name;
        // NOLINTEND

    public:
        // prevent constructor by default
        EduCloudImportInfo(EduCloudImportInfo const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::FileArchiver::EduCloudImportInfo& operator=(::FileArchiver::EduCloudImportInfo const&);

        MCNAPI ~EduCloudImportInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Result {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::FileArchiverOutcome> outcome;
        ::ll::UntypedStorage<8, 24>                     fileName;
        ::ll::UntypedStorage<8, 24>                     levelId;
        ::ll::UntypedStorage<8, 24>                     originalLevelId;
        // NOLINTEND

    public:
        // prevent constructor by default
        Result& operator=(Result const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Result(::FileArchiver::Result const&);

        MCNAPI Result(::FileArchiver::Result&&);

        MCNAPI ~Result();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::FileArchiver::Result const&);

        MCNAPI void* $ctor(::FileArchiver::Result&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct InterventionPublishers {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 88> mBegin;
        ::ll::UntypedStorage<8, 88> mCopyComplete;
        ::ll::UntypedStorage<8, 88> mLevelDataMutation;
        ::ll::UntypedStorage<8, 88> mPreFileRemoval;
        ::ll::UntypedStorage<8, 88> mLevelDataFinalize;
        ::ll::UntypedStorage<8, 88> mPrePackage;
        ::ll::UntypedStorage<8, 88> mCleanup;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI InterventionPublishers();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND
    };

    struct CopyWorldResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::FileArchiverOutcome> outcome;
        ::ll::TypedStorage<8, 24, std::string>          copiedLevelId;
        ::ll::UntypedStorage<8, 24>                     copiedLevelPath;
        // NOLINTEND

    public:
        // prevent constructor by default
        CopyWorldResult& operator=(CopyWorldResult const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CopyWorldResult();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ImportWorldsResult {
    public:
        // ImportWorldsResult inner types declare
        // clang-format off
        struct ImportWorldResult;
        // clang-format on

        // ImportWorldsResult inner types define
        struct ImportWorldResult {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, ::FileArchiverOutcome> outcome;
            ::ll::UntypedStorage<8, 24>                     path;
            // NOLINTEND

        public:
            // prevent constructor by default
            ImportWorldResult& operator=(ImportWorldResult const&);
            ImportWorldResult();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::FileArchiverOutcome>                                             outcome;
        ::ll::TypedStorage<8, 24, std::vector<FileArchiver::ImportWorldsResult::ImportWorldResult>> worlds;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImportWorldsResult& operator=(ImportWorldsResult const&);
    };

    struct ExportData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::FileArchiver::ExportType> mExportType;
        ::ll::TypedStorage<8, 24, std::string>               mLevelId;
        ::ll::TypedStorage<8, 8, ulong>                      mTotalFileCount;
        ::ll::TypedStorage<8, 80, ::FileArchiver::Result>    mResult;
        ::ll::UntypedStorage<8, 16>                          mLevelStorage;
        ::ll::TypedStorage<8, 8, ::LevelData*>               mLevelData;
        ::ll::TypedStorage<8, 8, std::unique_ptr<LevelData>> mOwnedLevelData;
        ::ll::UntypedStorage<8, 24>                          mWorldPath;
        // NOLINTEND
    };

    struct WorldConverterExportSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 2, std::optional<bool>> mKeepPlayerData;
        // NOLINTEND
    };

    using OperationCallback = std::function<void(FileArchiver::Result&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::FileArchiver::ProgressReporter>             mProgress;
    ::ll::TypedStorage<4, 40, std::mutex>                                    mStateLock;
    ::ll::TypedStorage<4, 4, ::FileArchiver::State>                          mCurrentState;
    ::ll::UntypedStorage<8, 32>                                              mFilePathManager;
    ::ll::UntypedStorage<8, 48>                                              mDisplayMessageCallback;
    ::ll::UntypedStorage<8, 24>                                              mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                             mLevelListCache;
    ::ll::TypedStorage<8, 8, ::LevelStorageSource&>                          mLevelStorageSource;
    ::ll::UntypedStorage<8, 24>                                              mSuccessfullyFiledArchives;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                     mIOTaskGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FileArchiver::IWorldConverter>> mWorldConverter;
    ::ll::TypedStorage<1, 1, bool>                                           mIsEditorModeEnabled;
    ::ll::UntypedStorage<8, 24>                                              mKeyProvider;
    ::ll::UntypedStorage<8, 24>                                              mLevelDbEnv;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, FileArchiver::EduCloudImportInfo>> mEduCloudImportInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    FileArchiver& operator=(FileArchiver const&);
    FileArchiver(FileArchiver const&);
    FileArchiver();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FileArchiver();

    virtual std::shared_ptr<FilePickerSettings> generateFilePickerSettings(std::vector<FileArchiver::ExportType> const&, std::string const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileArchiver(
        ::Scheduler&,
        ::ILevelListCache&,
        ::LevelStorageSource&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&,
        bool,
        std::unique_ptr<FileArchiver::IWorldConverter>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>,
        std::function<void(const std::string&)>
    );

    MCNAPI void _copyPackToTemp(::PackInstance const&, ::Core::Path const&, ::FileArchiver::Result&);

    MCNAPI ::Bedrock::Threading::Async<FileArchiver::Result> _enqueueExportWorldTasks(
        ::Core::Path const&,
        std::string const&,
        bool,
        ::FileArchiver::ExportType,
        ::FileArchiver::ShowToast const,
        ::Bedrock::Threading::Async<void>,
        ::gsl::not_null<std::shared_ptr<FileArchiver::InterventionPublishers>>,
        std::function<void(FileArchiver::Result&)>,
        std::optional<FileArchiver::WorldConverterExportSettings> const,
        ::Core::Path const&
    );

    MCNAPI bool _importWorld(::Core::Path const&, ::FileArchiver::Result&, std::string const&);

    MCNAPI void _printLevelResultMessage(::FileArchiver::Result const&);

    MCNAPI void _printLevelStartMessage();

    MCNAPI void _printMessage(std::string const&);

    MCNAPI void _revertPremiumUpgradePacks(::Core::Path const&);

    MCNAPI void _sanitizeWorld(::Core::Path const&);

    MCNAPI ::FileArchiver::Result
    _tryBeginExportLevel(std::string const&, ::Core::Path const&, ::FileArchiver::ShowToast const);

    MCNAPI bool _validatePremiumUpgradePacks(::Core::Path const&);

    MCNAPI std::string copyLevel(std::string const&, ::Core::Path const&);

    MCNAPI ::Bedrock::Threading::Async<FileArchiver::CopyWorldResult> copyLevelAsync(std::string const&);

    MCNAPI void eraseEduCloudImportInfo(std::string const&);

    MCNAPI void exportCurrentLevel(
        ::Level*,
        bool,
        ::FileArchiver::ExportType,
        ::Core::Path const&,
        std::function<void(FileArchiver::Result&)>,
        ::gsl::not_null<std::shared_ptr<FileArchiver::InterventionPublishers>>
    );

    MCNAPI void exportLevel(
        std::string const&,
        bool,
        ::FileArchiver::ExportType,
        ::Core::Path const&,
        std::function<void(FileArchiver::Result&)>,
        ::FileArchiver::ShowToast const,
        ::gsl::not_null<std::shared_ptr<FileArchiver::InterventionPublishers>>
    );

    MCNAPI void exportPack(::Core::Path const&, ::Core::Path const&, std::function<void(FileArchiver::Result&)>);

    MCNAPI ::FileArchiver::State getCurrentState();

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver::ProgressReporter>> getProgressReporter();

    MCNAPI ::Bedrock::Threading::Async<FileArchiver::Result>
    importLevel(::Core::Path const&, bool, bool, std::string const&);

    MCNAPI void
    importLevel(::Core::Path const&, std::function<void(FileArchiver::Result&)>, bool, bool, std::string const&);

    MCNAPI void
    setEduCloudImportInfo(std::string const&, std::string const&, std::string const&, std::string const&, bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::error_code make_error_code(::FileArchiverOutcome);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& EXTENSION_ADDON();

    MCNAPI static std::string const& EXTENSION_EDITOR_ADDON();

    MCNAPI static std::string const& EXTENSION_PROJECT();

    MCNAPI static std::string const& EXTENSION_RESOURCEPACK();

    MCNAPI static std::string const& EXTENSION_TEMPLATE();

    MCNAPI static std::string const& EXTENSION_VANILLA();

    MCNAPI static std::string const& IMPORT_LOCK_FILE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scheduler&,
        ::ILevelListCache&,
        ::LevelStorageSource&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Core::FilePathManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IResourcePackRepository>> const&,
        bool,
        std::unique_ptr<FileArchiver::IWorldConverter>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<LevelDbEnv>>,
        std::function<void(const std::string&)>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<FilePickerSettings>
           $generateFilePickerSettings(std::vector<FileArchiver::ExportType> const&, std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
