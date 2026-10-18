#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/Pack.h"
#include "mc/resources/PackSourceReport.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackIOProvider;
class IPackManifestFactory;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Pack;
class PackSourceReport;
#endif // @header-generator platform
class PackStorageContainer;
class TaskGroup;
#if defined(LL_PLAT_A) // @header-generator platform
struct PackIdVersion;
#else // @header-generator platform
#endif // @header-generator platform
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
struct PackSourceOptions;
struct PackStorage;
#if defined(LL_PLAT_A) // @header-generator platform
namespace PackCommand { struct UpgradeLegacyDependenciesBatch; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PackSource : public ::Bedrock::EnableNonOwnerReferences {
public:
    // PackSource inner types declare
    // clang-format off
    struct PackTaskData;
#if defined(LL_PLAT_A) // @header-generator platform
    class RequiredPackType;
#else // @header-generator platform
#endif // @header-generator platform
    class RequiredPackOrigin;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class RequiredPackType;
#endif // @header-generator platform
    class RequiredResourceOrBehaviorPackType;
    // clang-format on

    // PackSource inner types define
    struct PackTaskData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<Pack>>>> mOriginalPacks;
        ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<Pack>>>> mResultPacks;
        ::ll::TypedStorage<8, 40, ::PackSourceReport>                                mOriginalReport;
        ::ll::TypedStorage<8, 40, ::PackSourceReport>                                mResultReport;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnk673f56;
        ::ll::UntypedStorage<8, 24> mUnk1dbbeb;
        ::ll::UntypedStorage<8, 64> mUnke8ed21;
        ::ll::UntypedStorage<8, 64> mUnka1631e;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        PackTaskData& operator=(PackTaskData const&);
        PackTaskData(PackTaskData const&);
        PackTaskData();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    };

    class RequiredPackOrigin {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, ::PackOrigin const> mOrigin;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1> mUnk6149af;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        RequiredPackOrigin& operator=(RequiredPackOrigin const&);
        RequiredPackOrigin(RequiredPackOrigin const&);
#endif // @header-generator platform
        RequiredPackOrigin();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };

    class RequiredPackType {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnka29ba2;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequiredPackType& operator=(RequiredPackType const&);
        RequiredPackType(RequiredPackType const&);
        RequiredPackType();

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::PackType assertValidPackType(::PackType type);
        // NOLINTEND
#endif // @header-generator platform
    };

    class RequiredResourceOrBehaviorPackType {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, ::PackType const> mType;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1> mUnk2a81d8;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        RequiredResourceOrBehaviorPackType& operator=(RequiredResourceOrBehaviorPackType const&);
        RequiredResourceOrBehaviorPackType(RequiredResourceOrBehaviorPackType const&);
#endif // @header-generator platform
        RequiredResourceOrBehaviorPackType();
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit operator PackType() const;
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPackIOProvider>> const> mIO;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<TaskGroup>>>             mTaskGroup;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<PackStorageContainer>>>  mContainer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPackIOProvider>> const> mIO;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::TaskGroup>>>             mTaskGroup;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PackStorageContainer>>>  mContainer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackSource() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void forEachPackShared(::brstd::function_ref<void(gsl::not_null<std::shared_ptr<Pack>>)>);
#else // @header-generator platform
    virtual void forEachPackShared(::brstd::function_ref<void(::gsl::not_null<::std::shared_ptr<::Pack>>)> callback);
#endif // @header-generator platform

    virtual ::PackOrigin getPackOrigin() const;

    virtual ::PackType getPackType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _buildSourcesForLoad(std::vector<gsl::not_null<PackSource*>>&);
#else // @header-generator platform
    virtual void _buildSourcesForLoad(::std::vector<::gsl::not_null<::PackSource*>>& sources);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) = 0;
#else // @header-generator platform
    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&& options) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PackSource(::PackSourceOptions);
#else // @header-generator platform
    MCAPI explicit PackSource(::PackSourceOptions options);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addPack(std::shared_ptr<Pack>);
#else // @header-generator platform
    MCAPI void _addPack(::std::shared_ptr<::Pack> pack);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void> _addPacks(std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Bedrock::Threading::Async<void>
    _addPacks(::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& packs);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSourceLoadResult _applyAndFinishLoadTask(std::shared_ptr<PackSource::PackTaskData>);
#else // @header-generator platform
    MCAPI ::PackSourceLoadResult _applyAndFinishLoadTask(::std::shared_ptr<::PackSource::PackTaskData> task);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSourceLoadResult _createImmediateLoadResult();
#else // @header-generator platform
    MCAPI ::PackSourceLoadResult _createImmediateLoadResult();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<gsl::not_null<std::shared_ptr<Pack>>> _getPacks() const;
#else // @header-generator platform
    MCAPI ::PackStorage _getStorage() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSourceLoadResult
        _getTaskData(::brstd::function_ref<PackSourceLoadResult(std::shared_ptr<PackSource::PackTaskData>)>);
#else // @header-generator platform
    MCAPI ::PackSourceLoadResult
    _getTaskData(::brstd::function_ref<::PackSourceLoadResult(::std::shared_ptr<::PackSource::PackTaskData>)> task);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _removePack(::brstd::function_ref<bool(const Pack&)>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool _removePack(::brstd::function_ref<bool(::Pack const&)> predicate);

    MCAPI ::Bedrock::Threading::Async<::std::vector<::gsl::not_null<::std::shared_ptr<::Pack const>>>> getPacks();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSourceLoadResult _returnOriginalPacks(std::shared_ptr<PackSource::PackTaskData>);
#else // @header-generator platform
    MCAPI ::PackSourceReport load(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _setPacks(std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&);
#else // @header-generator platform
    MCAPI ::PackSourceLoadResult loadImmediate(
        ::IPackManifestFactory&                                           manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<Pack> fetchPack(::PackIdVersion const&);

    MCNAPI void forEachPack(std::function<void(Pack&)>);

    MCNAPI void forEachPackConst(std::function<void(const Pack&)>) const;

    MCNAPI ::Bedrock::Threading::Async<std::vector<gsl::not_null<std::shared_ptr<const Pack>>>> getPacks();

    MCNAPI ::PackSourceReport
    load(::IPackManifestFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&);

    MCNAPI ::PackSourceLoadResult
    loadImmediate(::IPackManifestFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&);

    MCNAPI ::PackSourceLoadResult requestLoad(::PackSourceLoadOptions&&);
#else // @header-generator platform
    MCAPI ::PackSourceLoadResult requestLoad(::PackSourceLoadOptions&& options);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::PackSourceOptions);
#else // @header-generator platform
    MCAPI void* $ctor(::PackSourceOptions options);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $forEachPackShared(::brstd::function_ref<void(gsl::not_null<std::shared_ptr<Pack>>)>);
#else // @header-generator platform
    MCAPI void $forEachPackShared(::brstd::function_ref<void(::gsl::not_null<::std::shared_ptr<::Pack>>)> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackOrigin $getPackOrigin() const;
#else // @header-generator platform
    MCFOLD ::PackOrigin $getPackOrigin() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackType $getPackType() const;
#else // @header-generator platform
    MCFOLD ::PackType $getPackType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_buildSourcesForLoad(std::vector<gsl::not_null<PackSource*>>&);
#else // @header-generator platform
    MCAPI void $_buildSourcesForLoad(::std::vector<::gsl::not_null<::PackSource*>>& sources);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
