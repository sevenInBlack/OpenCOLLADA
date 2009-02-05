/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_FLUIDTEXTURE3D_H__
#define __MayaDM_FLUIDTEXTURE3D_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMFluidShape.h"
namespace MayaDM
{
class FluidTexture3D : public FluidShape
{
public:
public:
	FluidTexture3D(FILE* file,const std::string& name,const std::string& parent=""):FluidShape(file, name, parent, "fluidTexture3D"){}
	virtual ~FluidTexture3D(){}
	void setAlphaGain(float ag)
	{
		if(ag == 1.0) return;
		fprintf(mFile,"setAttr \".ag\" %f;\n", ag);

	}
	void setAlphaOffset(float ao)
	{
		if(ao == 0.0) return;
		fprintf(mFile,"setAttr \".ao\" %f;\n", ao);

	}
	void setDefaultColor(const float3& dcl)
	{
		if(dcl == float3(0.5f,0.5f,0.5f)) return;
		fprintf(mFile,"setAttr \".dcl\" -type \"float3\" ");
		dcl.write(mFile);
		fprintf(mFile,";\n");

	}
	void setDefaultColorR(float dcr)
	{
		if(dcr == 0.0) return;
		fprintf(mFile,"setAttr \".dcl.dcr\" %f;\n", dcr);

	}
	void setDefaultColorG(float dcg)
	{
		if(dcg == 0.0) return;
		fprintf(mFile,"setAttr \".dcl.dcg\" %f;\n", dcg);

	}
	void setDefaultColorB(float dcb)
	{
		if(dcb == 0.0) return;
		fprintf(mFile,"setAttr \".dcl.dcb\" %f;\n", dcb);

	}
	void getRefPointCamera()
	{
		fprintf(mFile,"\"%s.rpc\"",mName.c_str());

	}
	void getRefPointCameraX()
	{
		fprintf(mFile,"\"%s.rpc.rcx\"",mName.c_str());

	}
	void getRefPointCameraY()
	{
		fprintf(mFile,"\"%s.rpc.rcy\"",mName.c_str());

	}
	void getRefPointCameraZ()
	{
		fprintf(mFile,"\"%s.rpc.rcz\"",mName.c_str());

	}
	void getOutAlpha()
	{
		fprintf(mFile,"\"%s.oa\"",mName.c_str());

	}
	void getOutCoord()
	{
		fprintf(mFile,"\"%s.ouc\"",mName.c_str());

	}
	void getOucx()
	{
		fprintf(mFile,"\"%s.ouc.ocx\"",mName.c_str());

	}
	void getOucy()
	{
		fprintf(mFile,"\"%s.ouc.ocy\"",mName.c_str());

	}
	void getOucz()
	{
		fprintf(mFile,"\"%s.ouc.ocz\"",mName.c_str());

	}
	void getAlphaGain()
	{
		fprintf(mFile,"\"%s.ag\"",mName.c_str());

	}
	void getAlphaOffset()
	{
		fprintf(mFile,"\"%s.ao\"",mName.c_str());

	}
	void getDefaultColor()
	{
		fprintf(mFile,"\"%s.dcl\"",mName.c_str());

	}
	void getDefaultColorR()
	{
		fprintf(mFile,"\"%s.dcl.dcr\"",mName.c_str());

	}
	void getDefaultColorG()
	{
		fprintf(mFile,"\"%s.dcl.dcg\"",mName.c_str());

	}
	void getDefaultColorB()
	{
		fprintf(mFile,"\"%s.dcl.dcb\"",mName.c_str());

	}
protected:
	FluidTexture3D(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType):FluidShape(file, name, parent, nodeType) {}

};
}//namespace MayaDM
#endif//__MayaDM_FLUIDTEXTURE3D_H__