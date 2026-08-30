#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core_graphics/VariationMap.h"
#include "mc/deps/core_graphics/enums/RenderState.h"
#include "mc/deps/core_graphics/enums/ShaderType.h"
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
    using MaterialVariationMap = std::map<std::string, std::shared_ptr<cg::RenderMaterialBase>>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderMaterialBase();

    virtual void parseRuntimeStates(::Json::Value const&) = 0;

    virtual void appendShaderPathForGfxAPI() = 0;

    virtual std::string buildHeader(std::set<std::string> const&);

    virtual void parseShader(::Json::Value const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $buildHeader(std::set<std::string> const&);

    MCNAPI void $parseShader(::Json::Value const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
