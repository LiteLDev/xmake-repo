#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/Pack.h"
#include "mc/resources/PackSourceReport.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackIOProvider;
class IPackManifestFactory;
class PackStorageContainer;
class TaskGroup;
struct PackIdVersion;
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
struct PackSourceOptions;
struct PackStorage;
namespace PackCommand { struct UpgradeLegacyDependenciesBatch; }
// clang-format on

class PackSource : public ::Bedrock::EnableNonOwnerReferences {
public:
    // PackSource inner types declare
    // clang-format off
    struct PackTaskData;
    class RequiredPackType;
    class RequiredPackOrigin;
    class RequiredResourceOrBehaviorPackType;
    // clang-format on

    // PackSource inner types define
    struct PackTaskData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<Pack>>>> mOriginalPacks;
        ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<Pack>>>> mResultPacks;
        ::ll::TypedStorage<8, 40, ::PackSourceReport>                                mOriginalReport;
        ::ll::TypedStorage<8, 40, ::PackSourceReport>                                mResultReport;
        // NOLINTEND

    public:
        // prevent constructor by default
        PackTaskData& operator=(PackTaskData const&);
        PackTaskData(PackTaskData const&);
        PackTaskData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PackTaskData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class RequiredPackType {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PackType const> mType;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequiredPackType();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::PackType assertValidPackType(::PackType);
        // NOLINTEND
    };

    class RequiredPackOrigin {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PackOrigin const> mOrigin;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequiredPackOrigin();
    };

    class RequiredResourceOrBehaviorPackType {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::PackType const> mType;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequiredResourceOrBehaviorPackType();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit operator PackType() const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPackIOProvider>> const> mIO;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>>>             mTaskGroup;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<PackStorageContainer>>>  mContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackSource() = 0;

    virtual void forEachPackShared(::brstd::function_ref<void(gsl::not_null<std::shared_ptr<Pack>>)>);

    virtual ::PackOrigin getPackOrigin() const;

    virtual ::PackType getPackType() const;

    virtual void _buildSourcesForLoad(std::vector<gsl::not_null<PackSource*>>&);

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PackSource(::PackSourceOptions);

    MCNAPI void _addPack(std::shared_ptr<Pack>);

    MCNAPI ::Bedrock::Threading::Async<void> _addPacks(std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&);

    MCNAPI ::PackSourceLoadResult _applyAndFinishLoadTask(std::shared_ptr<PackSource::PackTaskData>);

    MCNAPI ::PackSourceLoadResult _createImmediateLoadResult();

    MCNAPI std::vector<gsl::not_null<std::shared_ptr<Pack>>> _getPacks() const;

    MCNAPI ::PackSourceLoadResult
        _getTaskData(::brstd::function_ref<PackSourceLoadResult(std::shared_ptr<PackSource::PackTaskData>)>);

    MCNAPI bool _removePack(::brstd::function_ref<bool(const Pack&)>);

    MCNAPI ::PackSourceLoadResult _returnOriginalPacks(std::shared_ptr<PackSource::PackTaskData>);

    MCNAPI void _setPacks(std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&);

    MCNAPI std::shared_ptr<Pack> fetchPack(::PackIdVersion const&);

    MCNAPI void forEachPack(std::function<void(Pack&)>);

    MCNAPI void forEachPackConst(std::function<void(const Pack&)>) const;

    MCNAPI ::Bedrock::Threading::Async<std::vector<gsl::not_null<std::shared_ptr<const Pack>>>> getPacks();

    MCNAPI ::PackSourceReport
    load(::IPackManifestFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&);

    MCNAPI ::PackSourceLoadResult
    loadImmediate(::IPackManifestFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&);

    MCNAPI ::PackSourceLoadResult requestLoad(::PackSourceLoadOptions&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackSourceOptions);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $forEachPackShared(::brstd::function_ref<void(gsl::not_null<std::shared_ptr<Pack>>)>);

    MCNAPI ::PackOrigin $getPackOrigin() const;

    MCNAPI ::PackType $getPackType() const;

    MCNAPI void $_buildSourcesForLoad(std::vector<gsl::not_null<PackSource*>>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
