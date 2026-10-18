#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/ZipProgress.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/BasicStackString.h"
#endif // @header-generator platform
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace Core::ZipUtils { class ZipSettings; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class FileArchiver : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FileArchiver inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    class ProgressReporter;
    class IWorldConverter;
    struct EduCloudImportInfo;
    struct Result;
    struct InterventionPublishers;
#else // @header-generator platform
#endif // @header-generator platform
    struct CopyWorldResult;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct EduCloudImportInfo;
#endif // @header-generator platform
    struct ImportWorldsResult;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class ProgressReporter;
    struct Result;
#endif // @header-generator platform
    struct ExportData;
    struct WorldConverterExportSettings;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class IWorldConverter;
    struct InterventionPublishers;
#endif // @header-generator platform
    // clang-format on

    // FileArchiver inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class State : int {
        Idle      = 0,
        Importing = 1,
        Exporting = 2,
    };

#else // @header-generator platform
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    enum class State : int {
        Idle      = 0,
        Importing = 1,
        Exporting = 2,
#endif // @header-generator platform
    };

    struct CopyWorldResult {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::FileArchiverOutcome> outcome;
        ::ll::TypedStorage<8, 24, std::string>          copiedLevelId;
        ::ll::UntypedStorage<8, 24>                     copiedLevelPath;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, ::FileArchiverOutcome>              outcome;
        ::ll::TypedStorage<8, 32, ::std::string>                     copiedLevelId;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> copiedLevelPath;
#endif // @header-generator platform
        // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        CopyWorldResult& operator=(CopyWorldResult const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        CopyWorldResult& operator=(CopyWorldResult const&);
        CopyWorldResult();

#endif
#endif // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~CopyWorldResult();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI CopyWorldResult(::FileArchiver::CopyWorldResult const&);

        MCAPI ~CopyWorldResult();
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void* $ctor(::FileArchiver::CopyWorldResult const&);
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCFOLD void $dtor();
#endif
        // NOLINTEND
    };

    struct EduCloudImportInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>           isCloudImport;
        ::ll::TypedStorage<1, 1, bool>           allowMultiplayer;
        ::ll::TypedStorage<8, 32, ::std::string> educationOid;
        ::ll::TypedStorage<8, 32, ::std::string> cTag;
        ::ll::TypedStorage<8, 32, ::std::string> name;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
            ::ll::TypedStorage<4, 4, ::FileArchiverOutcome> outcome;
            ::ll::UntypedStorage<8, 24>                     path;
#else // @header-generator platform
            ::ll::TypedStorage<4, 4, ::FileArchiverOutcome>              outcome;
            ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> path;
#endif // @header-generator platform
            // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

        public:
            // prevent constructor by default
            ImportWorldResult& operator=(ImportWorldResult const&);
            ImportWorldResult();
#else // @header-generator platform
#endif // @header-generator platform
        };

    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::FileArchiverOutcome>                                             outcome;
        ::ll::TypedStorage<8, 24, std::vector<FileArchiver::ImportWorldsResult::ImportWorldResult>> worlds;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, ::FileArchiverOutcome>                                                 outcome;
        ::ll::TypedStorage<8, 24, ::std::vector<::FileArchiver::ImportWorldsResult::ImportWorldResult>> worlds;
        // NOLINTEND
    };

    class ProgressReporter : public ::Core::ZipUtils::ZipProgress, public ::Bedrock::EnableNonOwnerReferences {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mProgressLock;
        ::ll::TypedStorage<8, 32, ::std::string>               mProgressTitle;
        ::ll::TypedStorage<8, 32, ::std::string>               mProgressMessage;
        // NOLINTEND

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ProgressReporter() /*override*/ = default;

        virtual void clear() /*override*/;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCAPI ::std::string getProgressMessage();

        MCAPI ::std::string getProgressTitle();
#endif

        MCAPI void setProgressMessage(::std::string const& message);
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI void $clear();


        // NOLINTEND
    };

    struct Result {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::FileArchiverOutcome>              outcome;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> fileName;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> levelId;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> originalLevelId;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
        ImportWorldsResult& operator=(ImportWorldsResult const&);
#else // @header-generator platform
        Result& operator=(Result const&);
        Result();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Result(::FileArchiver::Result const&);

        MCAPI ~Result();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::FileArchiver::Result const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
#endif // @header-generator platform
    };

    struct ExportData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::FileArchiver::ExportType> mExportType;
        ::ll::TypedStorage<8, 24, std::string>               mLevelId;
        ::ll::TypedStorage<8, 8, ulong>                      mTotalFileCount;
        ::ll::TypedStorage<8, 80, ::FileArchiver::Result>    mResult;
        ::ll::UntypedStorage<8, 16>                          mLevelStorage;
        ::ll::TypedStorage<8, 8, ::LevelData*>               mLevelData;
        ::ll::TypedStorage<8, 8, std::unique_ptr<LevelData>> mOwnedLevelData;
        ::ll::UntypedStorage<8, 24>                          mWorldPath;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, ::FileArchiver::ExportType>                     mExportType;
        ::ll::TypedStorage<8, 32, ::std::string>                                 mLevelId;
        ::ll::TypedStorage<8, 8, uint64>                                         mTotalFileCount;
        ::ll::TypedStorage<8, 104, ::FileArchiver::Result>                       mResult;
        ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::LevelStorage>> mLevelStorage;
        ::ll::TypedStorage<8, 8, ::LevelData*>                                   mLevelData;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelData>>                 mOwnedLevelData;
        ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>             mWorldPath;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct WorldConverterExportSettings {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 2, std::optional<bool>> mKeepPlayerData;
#else // @header-generator platform
        ::ll::TypedStorage<1, 2, ::std::optional<bool>> mKeepPlayerData;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using OperationCallback = std::function<void(FileArchiver::Result&)>;
#else // @header-generator platform
    class IWorldConverter {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~IWorldConverter() = default;

        virtual void enqueueConvertImportingWorldTasks(
            ::std::shared_ptr<::FileArchiver::Result>&                      sharedResult,
            ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter> progress,
            ::Bedrock::Threading::Async<void>&                              prevTaskHandle
        ) = 0;

        virtual bool shouldCopyWorldForConversion(::std::string const& levelId) const = 0;

        virtual void enqueueConvertExportingWorldTasks(
            ::std::shared_ptr<::FileArchiver::ExportData>&                             exportData,
            ::Bedrock::NotNullNonOwnerPtr<::FileArchiver::ProgressReporter>            progress,
            ::Bedrock::Threading::Async<void>&                                         prevTaskHandle,
            ::gsl::not_null<::std::shared_ptr<::FileArchiver::InterventionPublishers>> interventionPublishers,
            ::std::optional<::FileArchiver::WorldConverterExportSettings> const        exportSetting
        ) = 0;

        virtual bool prepareEditorProjectForSaveSnapshot(
            ::Level&                           level,
            ::Core::PathBuffer<::std::string>& generatedLevelDataFile
        ) = 0;
        // NOLINTEND
    };

    struct InterventionPublishers {
    public:
        // InterventionPublishers inner types define
        using BeginSignature = void(::FileArchiver::ExportType, ::std::string const&, ::Core::Path const&);

        using CleanupSignature = void(::FileArchiver::ExportType);

        using CopyCompleteSignature =
            void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&);

        using LevelDataFinalizeSignature = void(::FileArchiver::ExportType, ::LevelData&);

        using LevelDataMutationSignature = void(::FileArchiver::ExportType, ::LevelData&);

        using PreFileRemovalSignature =
            void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&);

        using PrePackageSignature =
            void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&);

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<
                void(::FileArchiver::ExportType, ::std::string const&, ::Core::Path const&),
                ::Bedrock::PubSub::ThreadModel::MultiThreaded,
                0>>
            mBegin;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<
                void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&),
                ::Bedrock::PubSub::ThreadModel::MultiThreaded,
                0>>
            mCopyComplete;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<
                void(::FileArchiver::ExportType, ::LevelData&),
                ::Bedrock::PubSub::ThreadModel::MultiThreaded,
                0>>
            mLevelDataMutation;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<
                void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&),
                ::Bedrock::PubSub::ThreadModel::MultiThreaded,
                0>>
            mPreFileRemoval;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<
                void(::FileArchiver::ExportType, ::LevelData&),
                ::Bedrock::PubSub::ThreadModel::MultiThreaded,
                0>>
            mLevelDataFinalize;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::Publisher<
                void(::FileArchiver::ExportType, ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&),
                ::Bedrock::PubSub::ThreadModel::MultiThreaded,
                0>>
            mPrePackage;
        ::ll::TypedStorage<
            8,
            128,
            ::Bedrock::PubSub::
                Publisher<void(::FileArchiver::ExportType), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
            mCleanup;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI InterventionPublishers();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND
    };

    using OperationCallback = ::std::function<void(::FileArchiver::Result&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 192, ::FileArchiver::ProgressReporter>                          mProgress;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                mStateLock;
    ::ll::TypedStorage<4, 4, ::FileArchiver::State>                                       mCurrentState;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager>>     mFilePathManager;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>                mDisplayMessageCallback;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository>>   mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                          mLevelListCache;
    ::ll::TypedStorage<8, 8, ::LevelStorageSource&>                                       mLevelStorageSource;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>>           mSuccessfullyFiledArchives;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                              mIOTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FileArchiver::IWorldConverter>>          mWorldConverter;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsEditorModeEnabled;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>>                mLevelDbEnv;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::FileArchiver::EduCloudImportInfo>>
        mEduCloudImportInfo;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FileArchiver& operator=(FileArchiver const&);
    FileArchiver(FileArchiver const&);
    FileArchiver();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~FileArchiver();
#else // @header-generator platform
    virtual ~FileArchiver() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<FilePickerSettings> generateFilePickerSettings(std::vector<FileArchiver::ExportType> const&, std::string const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::shared_ptr<::FilePickerSettings>
    generateFilePickerSettings(::std::vector<::FileArchiver::ExportType> const& types, ::std::string const&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI FileArchiver(
        ::Scheduler&                                                    scheduler,
        ::ILevelListCache&                                              levelListCache,
        ::LevelStorageSource&                                           levelStorageSource,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&   pathManager,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& resourcePackRepository,
        bool                                                            isEditorModeEnabled,
        ::std::unique_ptr<::FileArchiver::IWorldConverter>              worldConverter,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>      keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                     levelDbEnv,
        ::std::function<void(::std::string const&)>                     displayMessageFunction
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _copyPackToTemp(::PackInstance const&, ::Core::Path const&, ::FileArchiver::Result&);
#else // @header-generator platform
    MCAPI void _clearArchiverState();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void
    _copyPackToTemp(::PackInstance const& packInstance, ::Core::Path const& tempPath, ::FileArchiver::Result& result);

    MCAPI ::Bedrock::Threading::Async<::FileArchiver::Result> _enqueueExportWorldTasks(
        ::Core::Path const&                                                        outputFilePath,
        ::std::string const&                                                       worldId,
        bool                                                                       isBundle,
        ::FileArchiver::ExportType                                                 exportType,
        ::FileArchiver::ShowToast const                                            showToast,
        ::Bedrock::Threading::Async<void>                                          preTaskHandle,
        ::gsl::not_null<::std::shared_ptr<::FileArchiver::InterventionPublishers>> interventionPublishers,
        ::std::function<void(::FileArchiver::Result&)>                             cleanupTask,
        ::std::optional<::FileArchiver::WorldConverterExportSettings> const        exportSetting,
        ::Core::Path const&                                                        targetFolder
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _exportLevelFiles(
        ::Core::Path const&                           outputFilePath,
        bool                                          isBundle,
        ::std::shared_ptr<::FileArchiver::ExportData> exportData,
        ::Core::Path const&                           worldPath
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void exportLevel(
        std::string const&,
        bool,
        ::FileArchiver::ExportType,
        ::Core::Path const&,
        std::function<void(FileArchiver::Result&)>,
        ::FileArchiver::ShowToast const,
        ::gsl::not_null<std::shared_ptr<FileArchiver::InterventionPublishers>>
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool _importWorld(
        ::Core::Path const&     archivedWorldFile,
        ::FileArchiver::Result& currentResult,
        ::std::string const&    importLevelId
    );
#endif

    MCAPI void _printLevelResultMessage(::FileArchiver::Result const& result);

#ifdef LL_PLAT_C
    MCAPI void _printLevelStartMessage();
#endif

    MCAPI void _printMessage(::std::string const& message);

    MCAPI ::FileArchiver::Result _tryBeginExportLevel(
        ::std::string const&            levelId,
        ::Core::Path const&             exportFilePath,
        ::FileArchiver::ShowToast const showToast
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void exportPack(::Core::Path const&, ::Core::Path const&, std::function<void(FileArchiver::Result&)>);
#else // @header-generator platform
    MCAPI bool _validatePremiumUpgradePacks(::Core::Path const& filePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FileArchiver::State getCurrentState();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string copyLevel(::std::string const& worldId, ::Core::Path const& targetFolder);

    MCAPI ::Bedrock::Threading::Async<::FileArchiver::CopyWorldResult> copyLevelAsync(::std::string const& worldId);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<FileArchiver::ProgressReporter>> getProgressReporter();
#else // @header-generator platform
    MCAPI ::Bedrock::Threading::Async<::FileArchiver::Result> exportCurrentEditorLevel(
        ::Level*                                                                   level,
        ::Core::Path const&                                                        exportFilePath,
        ::gsl::not_null<::std::shared_ptr<::FileArchiver::InterventionPublishers>> interventionPublishers,
        ::std::optional<::FileArchiver::WorldConverterExportSettings>              exportSetting,
        ::FileArchiver::ExportType                                                 exportType,
        ::FileArchiver::ShowToast                                                  toast
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<FileArchiver::Result>
    importLevel(::Core::Path const&, bool, bool, std::string const&);
#else // @header-generator platform
    MCAPI void exportCurrentLevel(
        ::Level*                                                                   level,
        bool                                                                       isBundle,
        ::FileArchiver::ExportType                                                 exportType,
        ::Core::Path const&                                                        exportFilePath,
        ::std::function<void(::FileArchiver::Result&)>                             exportCallback,
        ::gsl::not_null<::std::shared_ptr<::FileArchiver::InterventionPublishers>> interventionPublishers
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    importLevel(::Core::Path const&, std::function<void(FileArchiver::Result&)>, bool, bool, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void exportLevel(
        ::std::string const&                                                       worldId,
        bool                                                                       isBundle,
        ::FileArchiver::ExportType                                                 exportType,
        ::Core::Path const&                                                        exportFilePath,
        ::std::function<void(::FileArchiver::Result&)>                             exportCallback,
        ::FileArchiver::ShowToast                                                  showToast,
        ::gsl::not_null<::std::shared_ptr<::FileArchiver::InterventionPublishers>> interventionPublishers
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    setEduCloudImportInfo(std::string const&, std::string const&, std::string const&, std::string const&, bool);
#else // @header-generator platform
    MCAPI void exportPack(
        ::Core::Path const&                            path,
        ::Core::Path const&                            exportFilePath,
        ::std::function<void(::FileArchiver::Result&)> exportCallback
    );

#ifdef LL_PLAT_C
    MCAPI ::Bedrock::Threading::Async<::FileArchiver::Result> importLevel(
        ::Core::Path const&  archivedWorldFile,
        bool                 suppressStartMessage,
        bool                 suppressEndMessage,
        ::std::string const& levelId
    );

    MCAPI void importLevel(
        ::Core::Path const&                            archivedWorldFile,
        ::std::function<void(::FileArchiver::Result&)> importCallback,
        bool                                           suppressStartMessage,
        bool                                           suppressEndMessage,
        ::std::string const&                           levelId
    );

    MCAPI void setEduCloudImportInfo(
        ::std::string const& worldId,
        ::std::string const& cTag,
        ::std::string const& name,
        ::std::string const& oid,
        bool                 allowMultiplayer
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::error_code make_error_code(::FileArchiverOutcome);
#else // @header-generator platform
    MCAPI static void _revertPremiumUpgradePacks(::Core::Path const& filePath);

#ifdef LL_PLAT_C
    MCAPI static void _sanitizeWorld(::Core::Path const& newWorldPath);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& EXTENSION_ADDON();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string const& EXTENSION_ADDON();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& EXTENSION_EDITOR_ADDON();
#else // @header-generator platform
    MCAPI static ::std::string const& EXTENSION_PROJECT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& EXTENSION_PROJECT();
#else // @header-generator platform
    MCAPI static ::std::string const& EXTENSION_RESOURCEPACK();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& EXTENSION_RESOURCEPACK();
#else // @header-generator platform
    MCAPI static ::std::string const& EXTENSION_TEMPLATE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& EXTENSION_TEMPLATE();
#else // @header-generator platform
    MCAPI static ::std::string const& EXTENSION_VANILLA();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& EXTENSION_VANILLA();

    MCNAPI static std::string const& IMPORT_LOCK_FILE();
#else // @header-generator platform
    MCAPI static ::std::string const& IMPORT_LOCK_FILE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Scheduler&                                                    scheduler,
        ::ILevelListCache&                                              levelListCache,
        ::LevelStorageSource&                                           levelStorageSource,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const&   pathManager,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& resourcePackRepository,
        bool                                                            isEditorModeEnabled,
        ::std::unique_ptr<::FileArchiver::IWorldConverter>              worldConverter,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>      keyProvider,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>                     levelDbEnv,
        ::std::function<void(::std::string const&)>                     displayMessageFunction
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<FilePickerSettings>
           $generateFilePickerSettings(std::vector<FileArchiver::ExportType> const&, std::string const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::FilePickerSettings>
    $generateFilePickerSettings(::std::vector<::FileArchiver::ExportType> const& types, ::std::string const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
