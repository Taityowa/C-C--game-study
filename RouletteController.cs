using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RouletteController : MonoBehaviour
{
    float rotSpeed = 0;  //��]���x

    void Start()
    {
        
    }

    void Update()
    {
        //�}�E�X�������ꂽ���]���x��ݒ肷��
        if(Input.GetMouseButtonDown(0))
        {
            this.rotSpeed = 10;
        }

        //��]���x���A���[���b�g����]������
        transform.Rotate(0, 0, this.rotSpeed);

        //���[���b�g������������i�ǉ��j
                this.rotSpeed *= 0.997f;
        
    }
}