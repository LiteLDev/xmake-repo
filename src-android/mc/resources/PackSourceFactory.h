#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/RealmsUnknownPackSources.h"
#include "mc/resources/interface/IPackSourceFactory.h"

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
struct PackSourceOptions;
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
    ::ll::UntypedStorage<8, 64>                                      mTreatmentPackSources;
    ::ll::UntypedStorage<8, 64>                                      mDirectoryPackSources;
    ::ll::UntypedStorage<8, 64>                                      mInPackagePackSources;
    ::ll::UntypedStorage<8, 64>                                      mWorldHistoryPackSources;
    ::ll::UntypedStorage<8, 64>                                      mWorldTemplatePackSources;
    ::ll::TypedStorage<8, 16, ::RealmsUnknownPackSources>            mRealmsUnknownPackSources;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IInPackagePacks>>      mInPackagePacksProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPackIOProvider> const> mIO;
    ::ll::UntypedStorage<8, 24>                                      mCommands;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PackSourceFactory();

    virtual ::TreatmentPackSource& createTreatmentPackSource(::Core::Path const&, ::PackType);

    virtual ::TreatmentPackSource* getTreatmentPackSource(::Core::Path const&, ::PackType) const;

    virtual void removeFromTreatmentPackSource(::Core::Path const&);

    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(std::unique_ptr<WorldTemplateCollectionView>, ::mce::UUID const&, ::PackType, ::PackOrigin);

    virtual ::WorldTemplatePackSource& createWorldTemplatePackSource(::gsl::not_null<Bedrock::NonOwnerPointer<const IWorldTemplateManager>> const&, ::mce::UUID const&, ::PackType, ::PackOrigin);

    virtual ::WorldTemplatePackSource* getWorldTemplatePackSource(::mce::UUID const&, ::PackType) const;

    virtual ::DirectoryPackSource& createDirectoryPackSource(::Core::Path const&, ::PackType, ::PackOrigin, bool);

    virtual ::DirectoryPackSource* getDirectoryPackSource(::Core::Path const&, ::PackType) const;

    virtual ::InPackagePackSource& createInPackagePackSource(::PackType);

    virtual ::InPackagePackSource* getInPackagePackSource(::PackType);

    virtual ::WorldHistoryPackSource& createWorldHistoryPackSource(::Core::Path const&, ::PackType);

    virtual ::WorldHistoryPackSource* getWorldHistoryPackSource(::Core::Path const&, ::PackType) const;

    virtual std::unique_ptr<CompositePackSource> createCompositePackSource(std::vector<PackSource*>);

    virtual ::DirectoryPackSource* getDirectoryPackSourceContaining(::PackIdVersion const&) const;

    virtual void removeFromDirectoryPackSource(::Core::Path const&);

    virtual std::unique_ptr<Realms::RealmsServicePackSource> createRealmsServicePackSource(long, ::PackType, std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackSourceFactory(
        ::gsl::not_null<const std::shared_ptr<IInPackagePacks>>,
        std::unique_ptr<IPackIOProvider>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>>
    );

    MCNAPI ::PackSourceOptions createPackSourceOptions();

    MCNAPI void deleteDirectoryPackSourcesFromDirectory(::Core::Path const&);

    MCNAPI ::RealmsUnknownPackSources& getRealmsUnknownPackSources();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<const std::shared_ptr<IInPackagePacks>>,
        std::unique_ptr<IPackIOProvider>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>>
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
    MCNAPI ::TreatmentPackSource& $createTreatmentPackSource(::Core::Path const&, ::PackType);

    MCNAPI ::TreatmentPackSource* $getTreatmentPackSource(::Core::Path const&, ::PackType) const;

    MCNAPI void $removeFromTreatmentPackSource(::Core::Path const&);

    MCNAPI ::WorldTemplatePackSource& $createWorldTemplatePackSource(
        std::unique_ptr<WorldTemplateCollectionView>,
        ::mce::UUID const&,
        ::PackType,
        ::PackOrigin
    );

    MCNAPI ::WorldTemplatePackSource& $createWorldTemplatePackSource(
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IWorldTemplateManager>> const&,
        ::mce::UUID const&,
        ::PackType,
        ::PackOrigin
    );

    MCNAPI ::WorldTemplatePackSource* $getWorldTemplatePackSource(::mce::UUID const&, ::PackType) const;

    MCNAPI ::DirectoryPackSource& $createDirectoryPackSource(::Core::Path const&, ::PackType, ::PackOrigin, bool);

    MCNAPI ::DirectoryPackSource* $getDirectoryPackSource(::Core::Path const&, ::PackType) const;

    MCNAPI ::InPackagePackSource& $createInPackagePackSource(::PackType);

    MCNAPI ::InPackagePackSource* $getInPackagePackSource(::PackType);

    MCNAPI ::WorldHistoryPackSource& $createWorldHistoryPackSource(::Core::Path const&, ::PackType);

    MCNAPI ::WorldHistoryPackSource* $getWorldHistoryPackSource(::Core::Path const&, ::PackType) const;

    MCNAPI std::unique_ptr<CompositePackSource> $createCompositePackSource(std::vector<PackSource*>);

    MCNAPI ::DirectoryPackSource* $getDirectoryPackSourceContaining(::PackIdVersion const&) const;

    MCNAPI void $removeFromDirectoryPackSource(::Core::Path const&);

    MCNAPI std::unique_ptr<Realms::RealmsServicePackSource>
           $createRealmsServicePackSource(long, ::PackType, std::vector<gsl::not_null<std::shared_ptr<Pack>>>&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
