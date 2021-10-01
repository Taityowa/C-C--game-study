using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarController : MonoBehaviour
{
    float speed = 0;
    Vector2 startPos;

    void Start()
    {

    }

    void Update()
    {
        //�X���C�v�̒��������߂�
        if(Input.GetMouseButtonDown(0))  �@�@�@�@ //�}�E�X���N���b�N���ꂽ��
        {
            //�}�E�X���N���b�N�������W
            this.startPos = Input.mousePosition;�@�@�@�@�@�@�@�@�@�@//�����x��ݒ�
        }
        else if(Input.GetMouseButtonUp(0))
        {
            //�}�E�X��b�������W
            Vector2 endPos = Input.mousePosition;
            float swipeLength = endPos.x - this.startPos.x;

            //�X���C�v�̒����������x�ɕϊ�����
            this.speed = swipeLength / 1000.0f;

            //���ʉ��Đ�
            GetComponent<AudioSource>().Play();
        }

        transform.Translate(this.speed, 0, 0);�@�@//�ړ�
        this.speed *= 0.98f;�@�@�@�@�@�@�@�@�@�@�@//����
    }
}
