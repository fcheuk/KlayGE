// Renderable.cpp
// KlayGE 可渲染对象类 实现文件
// Ver 2.3.0
// 版权所有(C) 龚敏敏, 2003-2005
// Homepage: http://klayge.sourceforge.net
//
// 2.3.0
// 增加了Render (2005.1.15)
//
// 修改记录
//////////////////////////////////////////////////////////////////////////////////

#include <KlayGE/KlayGE.hpp>
#include <KlayGE/Math.hpp>
#include <KlayGE/Context.hpp>

#include <KlayGE/Renderable.hpp>

namespace KlayGE
{
	Renderable::~Renderable()
	{
	}

	void Renderable::OnRenderBegin()
	{
	}

	void Renderable::OnRenderEnd()
	{
	}

	Matrix4 Renderable::GetWorld() const
	{
		return Matrix4::Identity();
	}

	bool Renderable::CanBeCulled() const
	{
		return true;
	}

	bool Renderable::ShortAge() const
	{
		return false;
	}

	void Renderable::AddToSceneManager()
	{
		Context::Instance().SceneManagerInstance().AddRenderable(this->shared_from_this());
	}
}
