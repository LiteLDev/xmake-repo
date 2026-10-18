#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/resources/IPackSourceFactory.h"
#endif // @header-generator platform
#include "mc/resources/RealmsUnknownPackSources.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/interface/IPackSourceFactory.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class CompositePackSource;
class DirectoryPackSource;
class IInPackagePacks;
class IPackIOProvider;
class IWorldTemplateManager;
class InPackagePackSource;
class Pack;
class PackSource;
class TreatmentPackSource;
class WorldHistoryPackSource;
class WorldTemplateCollectionView;
class WorldTemplatePackSource;
struct PackIdVersion;
#if defined(LL_PLAT_A) // @header-generator platform
struct PackSourceOptions;
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Path; }
namespace PackCommand { class IPackCommandPipeline; }
namespace Realms { class RealmsServicePackSource; }
namespace mce { class UUID; }
// clang-format on

class PackSourceFactory : public ::IPackSourceFactory {
public:
    // PackSourceFactory inner types declare
    // clang-format off
    template<typename T0> struct SourcesList;
    // clang-format on

    // PackSourceFactory inner types define
    template <typename T0>
    struct SourcesList {};

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 64>                                      mTreatmentPackSources;
    ::ll::UntypedStorage<8, 64>                                      mDirectoryPackSources;
    ::ll::UntypedStorage<8, 64>                                      mInPackagePackSources;
    ::ll::UntypedStorage<8, 64>                                      mWorldHistoryPackSources;
    ::ll::UntypedStorage<8, 64>                                      mWorldTemplatePackSources;
    ::ll::TypedStorage<8, 16, ::RealmsUnknownPackSources>            mRealmsUnknownPackSources;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IInPackagePacks>>      mInPackagePacksProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPackIOProvider> const> mIO;
    ::ll::UntypedStorage<8, 24>                                      mCommands;
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::PackSourceFactory::SourcesList<::std::unique_ptr<::TreatmentPackSource>>>
        mTreatmentPackSources;
    ::ll::TypedStorage<8, 104, ::PackSourceFactory::SourcesList<::std::unique_ptr<::DirectoryPackSource>>>
        mDirectoryPackSources;
    ::ll::TypedStorage<8, 104, ::PackSourceFactory::SourcesList<::std::unique_ptr<::InPackagePackSource>>>
        mInPackagePackSources;
    ::ll::TypedStorage<8, 104, ::PackSourceFactory::SourcesList<::std::unique_ptr<::WorldHistoryPackSource>>>
        mWorldHistoryPackSources;
    ::ll::TypedStorage<8, 104, ::PackSourceFactory::SourcesList<::std::unique_ptr<::WorldTemplatePackSource>>>
                                                                         mWorldTemplatePackSources;
    ::ll::TypedStorage<8, 16, ::RealmsUnknownPackSources>                mRealmsUnknownPackSources;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IInPackagePacks>>      mInPackagePacksProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPackIOProvider> const> mIO;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PackCommand::IPackCommandPipeline>> mCommands;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceFactory();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~PackSourceFactory();
#else // @header-generator platform
    virtual ~PackSourceFactory() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TreatmentPackSource& createTreatmentPackSource(::Core::Path const&, ::PackType);
#else // @header-generator platform
#ifdef LL_PLAT_C
    virtual ::TreatmentPackSource&
    createTreatmentPackSource(::Core::Path const& path, ::PackType packType) /*override*/;

    virtual ::TreatmentPackSource* getTreatmentPackSource(::Core::Path const& path, ::PackType packType) const
        /*override*/;

    virtual void removeFromTreatmentPackSource(::Core::Path const& fullPathToPack) /*override*/;

#endif
    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager const> const& worldTemplateManager,
        ::mce::UUID const&                                                  worldTemplateId,
        ::PackType                                                          packType,
        ::PackOrigin                                                        packOrigin
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::TreatmentPackSource* getTreatmentPackSource(::Core::Path const&, ::PackType) const;
#else // @header-generator platform
    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(
        ::std::unique_ptr<::WorldTemplateCollectionView> view,
        ::mce::UUID const&                               worldTemplateId,
        ::PackType                                       packType,
        ::PackOrigin                                     packOrigin
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void removeFromTreatmentPackSource(::Core::Path const&);
#else // @header-generator platform
    virtual ::WorldTemplatePackSource*
    getWorldTemplatePackSource(::mce::UUID const& worldTemplateId, ::PackType packType) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(std::unique_ptr<WorldTemplateCollectionView>, ::mce::UUID const&, ::PackType, ::PackOrigin);
#else // @header-generator platform
    virtual ::DirectoryPackSource& createDirectoryPackSource(
        ::Core::Path const& path,
        ::PackType          packType,
        ::PackOrigin        packOrigin,
        bool                isDevDirectory
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(::gsl::not_null<Bedrock::NonOwnerPointer<const IWorldTemplateManager>> const&, ::mce::UUID const&, ::PackType, ::PackOrigin);
#else // @header-generator platform
    virtual ::DirectoryPackSource* getDirectoryPackSource(::Core::Path const& path, ::PackType packType) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldTemplatePackSource* getWorldTemplatePackSource(::mce::UUID const&, ::PackType) const;
#else // @header-generator platform
    virtual ::InPackagePackSource& createInPackagePackSource(::PackType packType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::DirectoryPackSource& createDirectoryPackSource(::Core::Path const&, ::PackType, ::PackOrigin, bool);
#else // @header-generator platform
    virtual ::InPackagePackSource* getInPackagePackSource(::PackType packType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::DirectoryPackSource* getDirectoryPackSource(::Core::Path const&, ::PackType) const;
#else // @header-generator platform
    virtual ::WorldHistoryPackSource&
    createWorldHistoryPackSource(::Core::Path const& pathToWorld, ::PackType packType) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InPackagePackSource& createInPackagePackSource(::PackType);
#else // @header-generator platform
    virtual ::WorldHistoryPackSource*
    getWorldHistoryPackSource(::Core::Path const& pathToWorld, ::PackType packType) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InPackagePackSource* getInPackagePackSource(::PackType);
#else // @header-generator platform
    virtual ::DirectoryPackSource* getDirectoryPackSourceContaining(::PackIdVersion const& packId) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldHistoryPackSource& createWorldHistoryPackSource(::Core::Path const&, ::PackType);
#else // @header-generator platform
    virtual void removeFromDirectoryPackSource(::Core::Path const& fullPathToPack) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::WorldHistoryPackSource* getWorldHistoryPackSource(::Core::Path const&, ::PackType) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Realms::RealmsServicePackSource> createRealmsServicePackSource(
        int64                                                       realmId,
        ::PackType                                                  packType,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& servicePackData
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CompositePackSource> createCompositePackSource(std::vector<PackSource*>);

    virtual ::DirectoryPackSource* getDirectoryPackSourceContaining(::PackIdVersion const&) const;

    virtual void removeFromDirectoryPackSource(::Core::Path const&);

    virtual std::unique_ptr<Realms::RealmsServicePackSource> createRealmsServicePackSource(long, ::PackType, std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&);
    // clang-format on
#else // @header-generator platform
    virtual ::std::unique_ptr<::CompositePackSource>
    createCompositePackSource(::std::vector<::PackSource*> sources) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PackSourceFactory(
        ::gsl::not_null<const std::shared_ptr<IInPackagePacks>>,
        std::unique_ptr<IPackIOProvider>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>>
#else // @header-generator platform
    MCAPI PackSourceFactory(
        ::gsl::not_null<::std::shared_ptr<::IInPackagePacks> const>        inPackagePacks,
        ::std::unique_ptr<::IPackIOProvider>                               io,
        ::Bedrock::NotNullNonOwnerPtr<::PackCommand::IPackCommandPipeline> commands
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSourceOptions createPackSourceOptions();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::DirectoryPackSource> createOwnedDirectoryPackSource(
        ::Core::Path const& path,
        ::PackType          packType,
        ::PackOrigin        packOrigin,
        bool                isDevDirectory
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void deleteDirectoryPackSourcesFromDirectory(::Core::Path const&);

    MCNAPI ::RealmsUnknownPackSources& getRealmsUnknownPackSources();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void deleteDirectoryPackSourcesFromDirectory(::Core::Path const& directoryPath);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<const std::shared_ptr<IInPackagePacks>>,
        std::unique_ptr<IPackIOProvider>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::gsl::not_null<::std::shared_ptr<::IInPackagePacks> const>        inPackagePacks,
        ::std::unique_ptr<::IPackIOProvider>                               io,
        ::Bedrock::NotNullNonOwnerPtr<::PackCommand::IPackCommandPipeline> commands
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TreatmentPackSource& $createTreatmentPackSource(::Core::Path const&, ::PackType);

    MCNAPI ::TreatmentPackSource* $getTreatmentPackSource(::Core::Path const&, ::PackType) const;

    MCNAPI void $removeFromTreatmentPackSource(::Core::Path const&);

    MCNAPI ::WorldTemplatePackSource& $createWorldTemplatePackSource(
        std::unique_ptr<WorldTemplateCollectionView>,
        ::mce::UUID const&,
        ::PackType,
        ::PackOrigin
#else // @header-generator platform
    MCAPI ::WorldTemplatePackSource& $createWorldTemplatePackSource(
        ::Bedrock::NotNullNonOwnerPtr<::IWorldTemplateManager const> const& worldTemplateManager,
        ::mce::UUID const&                                                  worldTemplateId,
        ::PackType                                                          packType,
        ::PackOrigin                                                        packOrigin
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldTemplatePackSource& $createWorldTemplatePackSource(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IWorldTemplateManager>> const&,
        ::mce::UUID const&,
        ::PackType,
        ::PackOrigin
#else // @header-generator platform
    MCAPI ::WorldTemplatePackSource& $createWorldTemplatePackSource(
        ::std::unique_ptr<::WorldTemplateCollectionView> view,
        ::mce::UUID const&                               worldTemplateId,
        ::PackType                                       packType,
        ::PackOrigin                                     packOrigin
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldTemplatePackSource* $getWorldTemplatePackSource(::mce::UUID const&, ::PackType) const;
#else // @header-generator platform
    MCAPI ::WorldTemplatePackSource*
    $getWorldTemplatePackSource(::mce::UUID const& worldTemplateId, ::PackType packType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DirectoryPackSource& $createDirectoryPackSource(::Core::Path const&, ::PackType, ::PackOrigin, bool);
#else // @header-generator platform
    MCAPI ::DirectoryPackSource& $createDirectoryPackSource(
        ::Core::Path const& path,
        ::PackType          packType,
        ::PackOrigin        packOrigin,
        bool                isDevDirectory
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DirectoryPackSource* $getDirectoryPackSource(::Core::Path const&, ::PackType) const;
#else // @header-generator platform
    MCAPI ::DirectoryPackSource* $getDirectoryPackSource(::Core::Path const& path, ::PackType packType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InPackagePackSource& $createInPackagePackSource(::PackType);
#else // @header-generator platform
    MCAPI ::InPackagePackSource& $createInPackagePackSource(::PackType packType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InPackagePackSource* $getInPackagePackSource(::PackType);
#else // @header-generator platform
    MCAPI ::InPackagePackSource* $getInPackagePackSource(::PackType packType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldHistoryPackSource& $createWorldHistoryPackSource(::Core::Path const&, ::PackType);
#else // @header-generator platform
    MCAPI ::WorldHistoryPackSource& $createWorldHistoryPackSource(::Core::Path const& pathToWorld, ::PackType packType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WorldHistoryPackSource* $getWorldHistoryPackSource(::Core::Path const&, ::PackType) const;
#else // @header-generator platform
    MCAPI ::WorldHistoryPackSource*
    $getWorldHistoryPackSource(::Core::Path const& pathToWorld, ::PackType packType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompositePackSource> $createCompositePackSource(std::vector<PackSource*>);
#else // @header-generator platform
    MCAPI ::DirectoryPackSource* $getDirectoryPackSourceContaining(::PackIdVersion const& packId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DirectoryPackSource* $getDirectoryPackSourceContaining(::PackIdVersion const&) const;
#else // @header-generator platform
    MCAPI void $removeFromDirectoryPackSource(::Core::Path const& fullPathToPack);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $removeFromDirectoryPackSource(::Core::Path const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Realms::RealmsServicePackSource> $createRealmsServicePackSource(
        int64                                                       realmId,
        ::PackType                                                  packType,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::Pack>>>&& servicePackData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Realms::RealmsServicePackSource>
           $createRealmsServicePackSource(long, ::PackType, std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompositePackSource> $createCompositePackSource(::std::vector<::PackSource*> sources);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::TreatmentPackSource& $createTreatmentPackSource(::Core::Path const& path, ::PackType packType);

    MCAPI ::TreatmentPackSource* $getTreatmentPackSource(::Core::Path const& path, ::PackType packType) const;

    MCAPI void $removeFromTreatmentPackSource(::Core::Path const& fullPathToPack);
#endif


#endif // @header-generator platform
    // NOLINTEND
};
