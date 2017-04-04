/* Copyright (c) <2003-2016> <Newton Game Dynamics>
* 
* This software is provided 'as-is', without any express or implied
* warranty. In no event will the authors be held liable for any damages
* arising from the use of this software.
* 
* Permission is granted to anyone to use this software for any purpose,
* including commercial applications, and to alter it and redistribute it
* freely
*/

#ifndef __D_INVERSE_KINEMATIC_H__
#define __D_INVERSE_KINEMATIC_H__


#include "dContainersStdAfx.h"
#include "dContainersAlloc.h"
#include "dBaseHierarchy.h"

class dInverseKinematic: public dContainersAlloc
{
	public:
	class dIKNode: public dHierarchy<dIKNode>
	{
		public:
		DCONTAINERS_API dIKNode();
		DCONTAINERS_API ~dIKNode();
	};

	DCONTAINERS_API dInverseKinematic();
	DCONTAINERS_API ~dInverseKinematic();

	protected:
	dIKNode* m_ikRoot;
};
#endif

