#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/DownloadWorldTemplateError.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IDlcBatcher;
class IStoreCatalogRepository;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/DownloadWorldTemplateError.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IDlcBatcher;
class IStoreCatalogRepository;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class DownloadableTemplateManagerBase : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mExistenceTracker;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDlcBatcher>> mDLCBatcher;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::function<void (std::optional<World::DownloadWorldTemplateError>)>>> mDownloadCallbacks;
    ::ll::TypedStorage<1, 1, bool> mCancelDownloadRequestedByUser;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&> mContentAquisition;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DownloadableTemplateManagerBase& operator=(DownloadableTemplateManagerBase const&);
    DownloadableTemplateManagerBase(DownloadableTemplateManagerBase const&);
    DownloadableTemplateManagerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~DownloadableTemplateManagerBase();

    virtual std::optional<World::DownloadWorldTemplateError> downloadWorldTemplate(std::string const&, std::function<void (std::optional<World::DownloadWorldTemplateError>)>);

    virtual void _templateDownloadedCallback(std::string const&, bool);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DownloadableTemplateManagerBase(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>,
        ::IContentAcquisition&
    );

    MCNAPI void _notifyDownloadCallbackAndRelease(std::string const&, std::optional<World::DownloadWorldTemplateError>);

    MCNAPI bool canDownloadBeCancelled(std::string const&) const;

    MCNAPI void cancelDownload(std::string const&);

    MCNAPI float getDownloadProgress(std::string const&) const;

    MCNAPI std::string getDownloadTotalBytes(std::string const&) const;

    MCNAPI std::string getDownloadingProgressBytes(std::string const&) const;

    MCNAPI bool isDownloadingStep2Started(std::string const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>, ::IContentAcquisition&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<World::DownloadWorldTemplateError>
    $downloadWorldTemplate(std::string const&, std::function<void(std::optional<World::DownloadWorldTemplateError>)>);

    MCNAPI void $_templateDownloadedCallback(std::string const&, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class DownloadableTemplateManagerBase : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>         mExistenceTracker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IDlcBatcher>> mDLCBatcher;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::string, ::std::function<void(::std::optional<::World::DownloadWorldTemplateError>)>>>
                                                     mDownloadCallbacks;
    ::ll::TypedStorage<1, 1, bool>                   mCancelDownloadRequestedByUser;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&> mContentAquisition;
    // NOLINTEND

public:
    // prevent constructor by default
    DownloadableTemplateManagerBase& operator=(DownloadableTemplateManagerBase const&);
    DownloadableTemplateManagerBase(DownloadableTemplateManagerBase const&);
    DownloadableTemplateManagerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DownloadableTemplateManagerBase() /*override*/ = default;

    virtual ::std::optional<::World::DownloadWorldTemplateError> downloadWorldTemplate(
        ::std::string const&                                                        templateId,
        ::std::function<void(::std::optional<::World::DownloadWorldTemplateError>)> callback
    );

    virtual void _templateDownloadedCallback(::std::string const& templateId, bool success);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DownloadableTemplateManagerBase(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::IContentAcquisition&                                   contentAquisition
    );

    MCAPI bool canDownloadBeCancelled(::std::string const& templateId) const;

    MCAPI void cancelDownload(::std::string const& templateId);

    MCAPI float getDownloadProgress(::std::string const& templateId) const;

    MCAPI ::std::string getDownloadTotalBytes(::std::string const& templateId) const;

    MCAPI ::std::string getDownloadingProgressBytes(::std::string const& templateId) const;

    MCAPI bool isDownloadingStep2Started(::std::string const& templateId) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalogRepository,
        ::IContentAcquisition&                                   contentAquisition
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::World::DownloadWorldTemplateError> $downloadWorldTemplate(
        ::std::string const&                                                        templateId,
        ::std::function<void(::std::optional<::World::DownloadWorldTemplateError>)> callback
    );

    MCAPI void $_templateDownloadedCallback(::std::string const& templateId, bool success);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class DownloadableTemplateManagerBase {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
