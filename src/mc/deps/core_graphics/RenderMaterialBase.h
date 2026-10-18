#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core_graphics/VariationMap.h"
#include "mc/deps/core_graphics/enums/RenderState.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core_graphics/enums/ShaderType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core_graphics/helpers/InheritanceType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cg { struct RenderFeaturesConfiguration; }
// clang-format on

namespace cg {

class RenderMaterialBase {
public:
    // RenderMaterialBase inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using MaterialVariationMap = std::map<std::string, std::shared_ptr<cg::RenderMaterialBase>>;
#else // @header-generator platform
    using DefineSet = ::std::set<::std::string>;

    using MaterialVariationMap = ::std::map<::std::string, ::std::shared_ptr<::cg::RenderMaterialBase>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::map<std::string, std::shared_ptr<cg::RenderMaterialBase>>> mMaterialVariations;
    ::ll::TypedStorage<8, 40, ::cg::VariationMap>                                             mVariationMap;
    ::ll::TypedStorage<8, 24, std::string>                                                    mFullMaterialName;
    ::ll::TypedStorage<8, 24, std::string>                                                    mVariantName;
    ::ll::TypedStorage<8, 24, std::string>                                                    mMaterialIdentifier;
    ::ll::TypedStorage<8, 24, std::set<std::string>>                                          mDefines;
    ::ll::TypedStorage<2, 2, ::mce::RenderState>                                              mStateMask;
    ::ll::TypedStorage<8, 24, std::string>                                                    mShaderHeader;
    ::ll::UntypedStorage<8, 24>                                                               mVertexShader;
    ::ll::UntypedStorage<8, 24>                                                               mFragmentShader;
    ::ll::UntypedStorage<8, 24>                                                               mGeometryShader;
    ::ll::UntypedStorage<8, 24>                                                               mVersion;
    ::ll::TypedStorage<1, 1, uchar>                                                           mRequiredTextures;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::shared_ptr<::cg::RenderMaterialBase>>>
                                                                 mMaterialVariations;
    ::ll::TypedStorage<8, 32, ::cg::VariationMap>                mVariationMap;
    ::ll::TypedStorage<8, 32, ::std::string>                     mFullMaterialName;
    ::ll::TypedStorage<8, 32, ::std::string>                     mVariantName;
    ::ll::TypedStorage<8, 32, ::std::string>                     mMaterialIdentifier;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>>         mDefines;
    ::ll::TypedStorage<2, 2, ::mce::RenderState>                 mStateMask;
    ::ll::TypedStorage<8, 32, ::std::string>                     mShaderHeader;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mVertexShader;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mFragmentShader;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mGeometryShader;
    ::ll::TypedStorage<8, 24, ::SemVersion>                      mVersion;
    ::ll::TypedStorage<1, 1, uchar>                              mRequiredTextures;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RenderMaterialBase();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~RenderMaterialBase() = default;
#else // LL_PLAT_C
    virtual ~RenderMaterialBase();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void parseRuntimeStates(::Json::Value const&) = 0;
#else // @header-generator platform
    virtual void parseRuntimeStates(::Json::Value const& root) = 0;
#endif // @header-generator platform

    virtual void appendShaderPathForGfxAPI() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string buildHeader(std::set<std::string> const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ::std::string buildHeader(::std::set<::std::string> const&);
#else // LL_PLAT_C
    virtual ::std::string buildHeader(::std::set<::std::string> const& defines);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void parseShader(::Json::Value const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void parseShader(::Json::Value const&);
#else // LL_PLAT_C
    virtual void parseShader(::Json::Value const& root);
#endif

#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RenderMaterialBase();

    MCNAPI void addDefine(std::string const&);

    MCNAPI std::set<std::string> const& getDefines() const;

    MCNAPI std::string const& getMaterialIdentifier() const;

    MCNAPI std::map<std::string, std::shared_ptr<cg::RenderMaterialBase>> const& getMaterialVariationMap() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getShaderProgramName(::mce::ShaderType) const;

    MCNAPI bool hasDefine(std::string const&) const;

    MCNAPI bool hasState(::mce::RenderState const) const;

    MCNAPI void modifyDefines(::cg::RenderFeaturesConfiguration const&);

    MCNAPI void parseDefines(::Json::Value const&);

    MCNAPI void parseMaterial(::Json::Value const&);

    MCNAPI void parseStates(::Json::Value const&);

    MCNAPI bool parseVariantWithInheritance(::Json::Value const&, std::string_view, ::mce::InheritanceType const);

    MCNAPI void parseVersion(::Json::Value const&);

    MCNAPI void removeDefine(std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void warnOnDeprecatedSchemaKeyword(::Json::Value const&, std::string_view);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI RenderMaterialBase();

    MCAPI void modifyDefines(::cg::RenderFeaturesConfiguration const& features);

    MCAPI void parseDefines(::Json::Value const& root);

    MCAPI void parseMaterial(::Json::Value const& root);

    MCAPI void parseStates(::Json::Value const& root);

    MCAPI bool parseVariantWithInheritance(
        ::Json::Value const&   root,
        ::std::string_view     key,
        ::mce::InheritanceType inheritanceType
    );

    MCAPI void parseVersion(::Json::Value const& root);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
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
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildHeader(std::set<std::string> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::string $buildHeader(::std::set<::std::string> const& defines);

    MCAPI void $parseShader(::Json::Value const& root);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $parseShader(::Json::Value const&);
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
